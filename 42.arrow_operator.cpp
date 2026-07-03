#include <string>
#include <iostream>

struct person {
  int age;
  std::string name;
};

int main() {
  person p1, p2;
  person *pptr = &p1;

  p1.age = 99;
  p1.name = "Jacob";

  (*pptr).age = 78;
  pptr->name = "Jhon";

  std::cout << p1.name << "Is " << p1.age << " years old." << std::endl;
}