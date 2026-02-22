#include <stdio.h>

int main(){

  // int i;

  // for( i = 0; i < 20; i++){
  //   switch(i){
  //     case 0: i += 5;
  //     case 1: i += 2;
  //     case 5: i += 5;
  //     default: i += 4;
  //   }
  //   printf("%d ", i);
  // }

  // int i = -5;
  // while(i <= 5){
  //   if(i >= 0){
  //     break;
  //   }else {
  //     i++;
  //     continue;
  //   }
  //   printf("Hello!");
  // }

  // int i = 0;
  // for(printf("one\n"); i < 3 && printf(""); i++){
  //   printf("Hi!\n");
  // }

  // unsigned int i = 500;
  // while(i++ != 0);
  // printf("%d ", i);

  // int x = 3;
  // if(x == 2);
  // x = 0;
  // if(x == 3) 
  //   x++;
  // else
  //   x += 2;

  // printf("x = %d", x);
  // char caracter = '*';
  // int max = 3;
  // int col = 4;
  // int iterator = 0;

  // for(int i = 0; i < max; i++){
  //   for(int y = col; y >= 0; y--){
  //     if(y == i){
  //       printf("%c",caracter);
  //     } else {
  //       printf("-");
  //     } 
  //     iterator++;
  //   }
  //   printf("\n");
  // }

  // printf("%3d\n",0);
  // printf("%2d\n",0);
  // printf("%01d\n",0);
  // printf("%0004d\n",0);
  // printf("%00005d\n",0);

  int n, i, j;
  printf("How many rows you want in your pyramid?\n");
  scanf("%d", &n);

  for(i = 1; i <= n; i++){
    for(j = 1; j <= 2 * n - 1; j++){
      if(j >= n - ( i - 1) && j <= n + (i - 1)){
        printf("*");
      }
      else
        printf(" ");
    }
    printf("\n");
  }

  return 0;
}