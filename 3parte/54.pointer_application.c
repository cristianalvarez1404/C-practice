#include <stdio.h>

//max and minimum values

// int main(){
//   int a[] = {23, 45, 6, 98};

//   int min, max;
//   min = max = a[0];

//   for(int i = 1; i <= 3; i++){
//     if(a[i] < min)
//       min = a[i];
//     if(a[i] > max)
//       max = a[i];
//   }

//   printf("%d\n", min);
//   printf("%d\n", max);
//   return 0;
// }

void minMax(int arr[], int len, int *min, int *max){
  *min = *max = arr[0];

  for(int i = 1; i < len; i++){
    if(arr[i] > * max)
      *max = arr[i];
    if(arr[i] < *min)
      *min = arr[i];
  }
}


int main(){
  int a[] = {23, 4, 21, 98, 987, 45, 32, 10, 123, 986, 50, 3, 4, 5};
  int min, max;
  int len = sizeof(a) / sizeof(a[0]);
  minMax(a, len, &min, &max);
  printf("Minimum value in the array is: %d and Maximum values is: %d", min, max);

  return 0;
}