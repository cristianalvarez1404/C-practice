#include <stdio.h>

// struct abc { => Wrong way to initialice a struct
//   int p = 23;
//   int q = 34;
// };

struct abc {
  int p;
  int q;
};

struct car {
  char engine[50];
  char fuel_type[10];
  int fuel_tank_cap;
  int seating_cap;
  float city_mileage;
};

int main(){
  //Initializing structure variables and accessing members of structure
  //we can access members of the structure using dot(.) operator.

  struct abc x = {23, 24};
  struct car c1 = {"DDis 190 Engine", "Diesel", 37, 5, 19.74}; 
  struct car c2 = {"Kappa", "Petrol", 22, 8, 14.5}; 

  printf("%d %d", c1.fuel_tank_cap, c2.fuel_tank_cap);

  return 0;
}