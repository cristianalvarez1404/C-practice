#include <stdio.h>
#include <stdbool.h>

bool is_leap_year(int year);

int main(){
  for(int i = 1900; i < 2100; i++){
    if(is_leap_year(i))
      printf("%d is a leap year\n",i);
    else
      printf("%d is not a leap year\n",i);
  }

  return 0;
}

bool is_leap_year(int year){
  return (year % 4 == 0 && year % 100 != 0) || (year % 400) == 0;
}