#include <stdio.h>

void swap(int *x, int *y){
  static int *temp;
  temp = x;
  x = y;
  y = temp;
}

void printab(){
  static int i, a = -3, b = -6; // call static memory => this is that this values retain its values even when the function finished its execution. There're different from de AUTOMATIC VARIABLES because this ones are destroyed after the funtion finished its execution. With STATIC VARIABLES not pass this, they retain their values saved into call static memory.

  i = 0;
  while(i <= 4){
    if((i++ % 2) == 1 ) continue; //pos increment not pre increment
    a = a + i;
    b = b + i;
  }  
  swap(&a, &b); // This function swap ONLY ADDRESS NOT THE VALUE OF THE VARIABLE, THE VARIABLES A AND B CONTINUE WITH ITS VALUE BUT WITH DIFFERENT ADDRESSES
  printf("a = %d, b = %d\n", a , b);
}

int main(){
  printab();
  printab();

  return 0;
}