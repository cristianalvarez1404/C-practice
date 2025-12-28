#include <stdio.h>
typedef int INTEGER; // structure TYPEDEF 

struct car { // structure TAG
  char engine[50];
  char fuel_type[10];
  int fuel_tank_cap;
  int seating_cap;
  float city_mileage;
} c1; // => varible in global scope

struct car2 { // structure TAG
  char engine[50];
  char fuel_type[10];
  int fuel_tank_cap;
  int seating_cap;
  float city_mileage;
}; // => varible in global scope

typedef struct car3 { // structure TAG
  char engine[50];
  char fuel_type[10];
  int fuel_tank_cap;
  int seating_cap;
  float city_mileage;
} car3; // => varible in global scope


int main(){
  //structure types - typedef - Using typedef
  //typedef gives freedom to the user by allowing them to create their own types.
  struct car2 c2; // => variable in local scope 
  car3 car3; // => structs with typedef
  INTEGER var = 100;
  printf("%d", var);

  return 0;
}