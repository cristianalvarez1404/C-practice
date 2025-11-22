#include <stdio.h>

int main(){
  //variable modifiers - Auto & Extern

  // Auto means Automatic => Variables declared inside a scope by default are automatic variables. Syntaxis => auto int some_variable_name;

  extern int var; // Only declaration, not definition to allocated memory => It's used to share variables between files
  return 0;
}