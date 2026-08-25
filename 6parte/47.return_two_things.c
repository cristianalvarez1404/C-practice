#include <stdio.h>
#include <assert.h>

typedef struct {
  double max, min;
} number_range;

number_range get_max_and_min2(double *values, int length) {
  assert(length > 0);
  number_range result;
  result.min = values[0];
  result.max = values[0];

  for(int i = 0; i < length; i++) {
    if(values[i] > result.max)
      result.max = values[i];

    if(values[i] < result.min)
      result.min = values[i];
  }

  return result;
}

void get_max_and_min1(double *values, int length, double *pmin, double *pmax) {
  assert(length > 0);
  double max = values[0];
  double min = values[0];
  for(int i = 0; i < length; i++) {
    if(values[i] > max)
      max = values[i];

    if(values[i] < min)
      min = values[i];
  }
  if(pmin != NULL)
    *pmin = min;

  if(pmax != NULL)
    *pmax = max;
}

int main() {
  double values[5] = {9.8, 1.2, -75.2, 14, 3};

  double mymin = 0, mymax = 0;
  get_max_and_min1(values, 5, &mymin, &mymax);
  printf("(%lf, %lf)\n", mymax, mymin);
  
  number_range nr; 
  nr = get_max_and_min2(values, 5);
  printf("(%lf, %lf)\n", nr.max, nr.min);
}