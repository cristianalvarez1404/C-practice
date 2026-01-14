#include <stdio.h>

void add_at_pos(int arr[], int arr2[], int n, int data, int pos){
  int i;
  int index = pos - 1;
  for(i = 0; i <= index - 1; i++)
    arr2[i] = arr[i];
  arr2[index] = data;
  int j;
  for(i = index + 1, j = index ;i < n + 1, j < n; i++, j++ )
    arr2[i] = arr[j];
}

int main(){
  int arr[] = {2, 34, 21, 6, 7, 8, 90, 67, 23, 39};
  int pos = 5, data = 78, i;
  int size = sizeof(arr) / sizeof(arr[0]);
  int arr2[size + 1]; // Remember that we must to pass this arr because an arr is local to each function. And we must to be aware of passing the ADDRESS OF THE FIRST BLOCK OF ARR2,SO THE CHANGES MADE IN CALLED FUNCTIONS WILL BE REFLECTED IN THE CALLER FUNCTION. THAT'S THE REASON ADD_AT_POS DON'T RETURN A FUNCTION.
  add_at_pos(arr, arr2, size, data, pos);

  for(i = 0; i < size + 1; i++)
    printf("%d ", arr2[i]);

  return 0;
}