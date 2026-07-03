#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <assert.h>

#define ARRAY_LENGTH 5
#define BUFSIZE 40

int getmean(int *arr, int length) {
  assert(length > 0);
  int sum = 0;
  for(int i = 0; i < length; i++){
    sum += arr[i];
  }
  return sum/length;
}

int main(){
  int values[ARRAY_LENGTH] = {0};
  char buffer[BUFSIZE];
  int index = 0;

  while(true){
    //ask user for an interger
    printf("Type a number: ");
    if(fgets(buffer, BUFSIZE, stdin) == NULL)
      break;

    //save the new the array
    values[index] = atoi(buffer);

    //move the index to the next element, wrap around if needed
    // index++;
    // if(index >= ARRAY_LENGTH){
    //   index = 0;
    // }
    index = (index + 1) % ARRAY_LENGTH;

    //print out the array and the mean of its values
    printf("[");
    for(int i = 0; i < ARRAY_LENGTH; i++){
      printf("%i,", values[i]);
    }
    printf("] - mean = %i\n", getmean(values, ARRAY_LENGTH));
  }
}