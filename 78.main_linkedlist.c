#ifdef USE_LINKED_LIST
  #define add_number(v) add_number_all(v)
  #define delete_number(v) delete_number_ll(v)
#else 
  #ifdef WASTE_MEMORY
    #define add_number(v) add_number_array_wasteful(v)
  #else
    #define add_number(v) add_number_array_reuse(v)
  #endif
    #define delete_number(v) delete_number_array(v)
#endif

#include <limits.h>
#include <stdio.h>
#include <stdlib.h>

#include "linkedlist.h"

#define AVAILABLE INT_MIN
#define NOT_FOUND (-1)
#define INITIAL_ARRAY_SIZE 100
#define ARRAY_INCREMENT 1000
#define MAX_VALUE 500000
#define NUM_ITERATIONS 2000
#define INSERT_NUM 100
#define DELETE_NUM 50
#define TRAVERSALS 1

// head of the linked list.
node *head = NULL;

// the array
int *myvalues = NULL;
int listlength = INITIAL_ARRAY_SIZE;

void add_number_ll(int value) {
  node *newnode = create_new_node(value);
  insert_at_head(&head, newnode);
}

int find_value(int value) {
  for(int i = 0; i < listlength; i++){
    if(myvalues[i] == value){
      return i;
    }
  }
  return NOT_FOUND;
}

void add_number_array_wasteful(int value) {
  //  don't bother reusing memory. Just stick the value
  //  at the end.
  
  static int last_loc = -1;

  last_loc++;

  if(last_loc >= listlength){
    //  grow the array
    int newlength = listlength + ARRAY_INCREMENT;
    myvalues = realloc(myvalues, newlength * sizeof(int));
    
    for(int i = listlength; i < newlength; i++) {
      myvalues[i] = AVAILABLE;
    }
    listlength = newlength;
  }
  myvalues[last_loc] = value;
  return;
}

void add_number_array_reuse(int value) {

  //is there an empty location
  int loc = find_value(AVAILABLE);

  if(loc == NOT_FOUND) {
    // grow the array
    int newlength = listlength + ARRAY_INCREMENT;
    myvalues = realloc(myvalues, newlength * sizeof(int));
    myvalues[listlength] = value; // take the first available slot
    
    for(int i = listlength + 1; i < newlength; i++){
      myvalues[i] = AVAILABLE;
    }
    listlength = newlength;
  } else {
    myvalues[loc] = value;
  }
  return;
}

void delete_number_ll(int value) {remove_value(&head, value);}

void delete_number_array(int value) {
  int loc = find_value(value);
  if(loc != NOT_FOUND) {
    myvalues[loc] = AVAILABLE;
  }
}

long double tv_to_seconds(struct timeval *tv) {
  long double result = tv->tv_sec;
  result += ((long double)tv->tv_usec) / 1000000.0;
  return result;
}

int main() {
  #ifndef USE_LINKED_LIST
    //initialize the array
    myvalues = malloc(sizeof(int) * listlength);
    for(int i = 0; i < listlength; i++){
      myvalues[i] = AVAILABLE;
    }
  #endif

    struct rusage myusage;
    getrusage(RUSAGE_SELF, &myusage);
    long baseline_memory = myusage.ru_maxrss;
    long double start_time = tv_to_seconds(&myusage.ru_utime);

    // use the same random seed, so that the behavior is the same for all.
    srand(0);

    long double last_time = start_time, insert_time = 0.0, delete_time = 0.0;

    for(int32_t i = 0; i < NUM_ITERATIONS; i++){

      //add 100 numbers
      for(int i = 0; i < INSERT_NUM; i++){
        add_number(rand() % MAX_VALUE);
      }

      //check the time
      getrusage(RUSAGE_SELF, &myusage);
      long double current = tv_to_seconds(&myusage.ru_utime);
      insert_time += (current - last_time);
      last_time = current;

      //try to delete 50 random numbers
      for(int i = 0; i < DELETE_NUM; i++){
        delete_number(rand() % MAX_VALUE);
      }

      //check the time
      getrusage(RUSAGE_SELF, &myusage);
      current = tv_to_seconds(&myusage.ru_utime);
      delete_time += (current - last_time);
      last_time = current;
    }

    long double add_delete_time = last_time;

    //  traverse the values, by trying to delete a value
    //  I know isn't there.
    for(int i = 0; i < TRAVERSALS; i++){
      delete_number(MAX_VALUE + 1);
    }

    getrusage(RUSAGE_SELF, &myusage);
    long double traverse_time = tv_to_seconds(&myusage.ru_utime);

    printf("Memory:           \t%ld\t+ %ld\n", baseline_memory, myusage.ru_maxrss - baseline_memory);

    printf("Insert Time:      \t%Lf\n", insert_time);
    printf("Delete Time:      \t%Lf\n", delete_time);
    printf("Add/Del Time:     \t%Lf\n", add_delete_time - start_time);
    printf("Traversal Time:   \t%Lf\n", traverse_time - add_delete_time);
    printf("TotalUserTime:    \t%Lf\n", tv_to_seconds(&myusage.ru_utime));
    printf("SysTime:          \t%Lf\n", tv_to_seconds(&myusage.ru_stime));

    return 0;
}