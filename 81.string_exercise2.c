#include <stdio.h>
#include <string.h>

void fun1(char *s1, char *s2){ 
  char *tmp;
  tmp = s1;
  s1 = s2; // this change is LOCAL
  s2 = tmp; // this change is LOCAL
}

void fun2(char **s1, char **s2){
  char *tmp;
  tmp = *s1;
  *s1 = *s2; // this change the pointer char address, therefore the value change 
  *s2 = tmp;
}

int main(){
  char *str1 = "Hi", *str2 = "Bye";
  fun1(str1, str2); printf("%s %s\n", str1, str2);
  fun2(&str1, &str2); printf("%s %s\n", str1, str2);

  //secundo exercise
  char *c = "GATECSIT2017";
  char *p = c;
  printf("%d", (int)strlen(c + 2[p] - 6[p] - 1)); //2[p] = *(2 + p)
  // strlen returns a size_t type data therefore, (int) will convert the size_t type to int type. This is called Type Casting.

  return 0;
}