#include <stdio.h>
#define variable 1

enum Bool { // we can declare in the local scope, with #define not.
  //Enums are inialized by the compiler
  False = 5,
  True = 6
};

int main(){
  // Enumeration(enum) => An enumerated type is a user defined type which is used to assign names to integral constants because names are easier to handle in program.

  // Only integers values are allowed
  // All enum constanst must be UNIQUE in their scope

  enum Bool var;
  var = True;
  printf("%d", variable);

  enum Bool2 {True1,False1} var; // valid iniaticing

  return 0;
}