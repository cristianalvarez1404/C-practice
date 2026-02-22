#include <stdio.h>

int main(){
  // Designated initialization
  int arr[10] = {[0] = 1, [5] = 2, [6] = 3};
  int a[] = {[5] = 90, [20] = 4, [1] = 45, [49] = 78};

  return 0;
}