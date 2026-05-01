#include <stdio.h>
#include <string.h>

void delete(char string[], char substring[]);

int main()
{
  char string[] = "Hate the sin, love the sinner";

  printf("Before: %s\n", string);
    
  delete(string, "the ");
  
  printf("After: %s\n", string);

  return 0; 
}

void delete(char string[], char substr[])
{
  int i = 0;
  int string_length = strlen(string);
  int substr_length = strlen(substr);

  while(i < string_length)
  {
    if(strstr(&string[i], substr) == &string[i])
    {
      string_length -= substr_length;

      for(int j = i; j < string_length; j++)
        string[j] = string[j + substr_length];
    }
    else i++;
  }

  string[i] = '\0';
}