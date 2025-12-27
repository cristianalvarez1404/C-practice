#include <stdio.h>

struct employee { // global struct with TAG
  char *name;
  int age;
  int salary;
};

struct car { // => struct TAG 'car'
  char engine[50];
  char fuel_type[10];
  int fuel_tank_cap;
  int seating_cap;
  float city_mileage;
} c1; // we can create a variable here, there is no problem

int manager() {
  struct employee manager;

  manager.age = 37;

  if(manager.age > 30)
    manager.salary = 65000;
  else
    manager.salary = 55000;

  return manager.salary;
}

int main(){
  struct employee emp1;
  struct employee emp2;

  struct car c1;
  printf("Enter the salary of employee1: ");
  scanf("%d", &emp1.salary);
  printf("Enter the salary of employee2: ");
  scanf("%d", &emp2.salary);
  printf("Employee 1 salary is: %d\n", emp1.salary);
  printf("Employee 2 salary is: %d\n", emp2.salary);
  printf("Manager's salary is %d", manager());
}