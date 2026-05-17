#include <stdio.h>

double sum(double num_arr[], int len_arr);
double average(double sum_arr, int len_arr);

int main(){
  double num_arr[] = {2.2,4.2,6.2,8.2,10.2,12.2,14.2,16.2,18.2,20.2,5.0};
  int len_arr = sizeof(num_arr) / sizeof(double);
  double sum_arr = sum(num_arr,len_arr);
  double avg_arr = average(sum_arr, len_arr);

  printf("Total numbers => %d\n", len_arr);
  printf("Sum => %.2lf\n", sum_arr);
  printf("Average => %.2lf\n", avg_arr);

  return 0;
}

double sum(double num_arr[], int len_arr){
  double total = 0;
  for(int i = 0; i < len_arr; i++)
    total += num_arr[i];

  return total;
}

double average(double sum_arr, int len_arr){
  return sum_arr / len_arr;
}