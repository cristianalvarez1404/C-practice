#include <stdio.h>

//enums are one tool to group a set of related values together

enum weekday {
  mon = -1,
  tue = 3,
  wed = 4,
  thu = 5,
  fri = 6
};

int main(){

  enum weekday current_day = mon;

  switch(current_day){
    case mon: {
      printf("It is mon\n");
      break;
    }
    case tue: {
      printf("It is tue\n");
      break;
    }
    case wed: {
      printf("It is wed\n");
      break;
    }
    case thu: {
      printf("It is thu\n");
      break;
    }
    case fri: {
      printf("It is fri\n");
      break;
    }
    default: {
      printf("Fail!");
    }
  }

  printf("%d\n", mon);
  printf("%d\n", tue);
  printf("%d\n", wed);
  printf("%d\n", thu);
  printf("%d\n", fri);

  return 0;
}