#include <stdio.h>

int main(){
  //Big o notation is used to measure the performance of any algorithm by providing the order of growth of the function.

  //It gives the upper bound on a function by which we can make sure that the function will never grow faster than this upper bound.

  /*----------------------------------------------*/
  /*--------------Loops---------------------------*/
  /*--------------Total time = O(n)---------------*/
  /*
    int n;

    for(int i = 1; i <= n; i++){
      statement
    }
  */

  /*----------------------------------------------*/
  /*--------------Nested Loops--------------------*/
  /*--------------Total time = n x n = O(n2)---------------*/
  /*
    int n;

    for(int i = 1; i <= n; i++){
      for(int y = 1; y <= n; y++){
      } 
    }
  */


  /*-------------------------------------------------------*/
  /*--------------If then else statements------------------*/
  /*--------------Total time = n x n = O(n2)---------------*/
  /*
    int n;
    scanf("%d", &n);
    if(n == 0){     =>>> Takes constant time 1 + 1 = O(1)
        statment
    }
    else{
      for(int i = 1; i <= n; i++){ =>>> 1 + n = O(n)
        statment
      }
    }
  */


  return 0;
}