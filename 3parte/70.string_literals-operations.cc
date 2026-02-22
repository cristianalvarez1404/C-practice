#include <stdio.h>

int main(){
  // Operations on string literals
  
  // Recall: Writing string literal is equivalent to writing the pointer to the first character of the string literal.
  
  // String literal cannot be modified. It causes undefined behavior.
  
  // String literals are also known as string constants. They have been allocated a READ ONLY MEMORY. SO WE CANNOT ALTER THEM. 

  // But character pointer itself has been allocated READ-WRITE MEMORY. So the same pointer can point to some other string literal.


  char *ptr = "Hello World";
  *ptr = 'M'; //No allowed

  return 0;
}