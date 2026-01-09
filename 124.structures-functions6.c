#include <stdio.h>

struct abc {
  int a;
  char b;
};

struct point {
  int x;
  int y;
};

void print(struct point arr[]){
  int i;
  for(i = 0; i < 2; i++)
    printf("%d %d\n", arr[i].x, arr[i].y);
}


int main(){
  // Passing array of structures as argument.

  //Compiler will allocate contiguous block of memory for the data members of the structure.

  struct abc arr1[2] = {{1, 'A'}, {2, 'B'}};
  struct point arr[2] = {{1, 2},{3, 4}}; 
  print(arr);

  return 0;
}