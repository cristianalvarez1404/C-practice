#include <stdio.h>

/*
  count characters in input; 1st version
*/

// int main(){
//   long nc;

//   nc = 0;
//   while(getchar() != EOF){
//     ++nc;
//     printf("%ld\n", nc);
//   }

//   return 0;
// }

/*
  count characters in input; 2nd version
*/

// int main(){
//   double nc;

//   for(nc = 0; getchar() != EOF; ++nc){
//     printf("%.0f\n", nc);
//   }

//   return 0;
// }

/*
  Line counting
*/

// int main(){
//   int c, nl;

//   nl = 0;

//   while((c = getchar()) != EOF){
//     if(c == '\n'){
//       ++nl;
//     }
//   }
//   printf("%d\n",nl);

//   return 0;
// }


// int main(){
//   int blanks = 0;
//   int tabs = 0;
//   int newlines = 0;
//   int character = 0;

//   while((character = getchar()) != EOF){
//     printf("%d",getchar());
//     if(character == '\t') tabs++;

//     if(character == ' ') blanks++;

//     if(character == '\n') newlines++;
//   }

//   printf("tabs => %d - blanks => %d - newlines => %d", tabs, blanks, newlines);

//   return 0;
// }

int main(){
  int currentWord = 0;
  int previousWord = 0;
  char word[100] = "";
  int blanks = 0;
  int i = 0;

  while((currentWord = getchar()) != EOF){
    if(currentWord == ' ' && previousWord == ' ') continue;
    
    if (i < 99) word[i++] = currentWord;
    previousWord = currentWord;

  }
  
  word[i] = '\0';
  printf("%s", word);

  return 0;
}