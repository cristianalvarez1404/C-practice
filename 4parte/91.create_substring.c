#include <stdio.h>
#include <string.h>

void substring(char *orig, char *substr, int index, int length);

int main()
{
  char product_code[] = "100-400-0.750-3434-A";

  char part_number[4];
  char manu_id[4];
  char supp_id[5];

  substring(product_code, part_number, 0, 3);
  substring(product_code, manu_id, 4, 3);
  substring(product_code, supp_id, 14, 4);

  printf("Part: %s\n", part_number);
  printf("Menu: %s\n", manu_id);
  printf("Supp: %s\n", supp_id);

  char error1[50];
  char error2[50];

  substring(product_code, error1, 200, 5);
  printf("Error 1: %s\n", error1);

  substring(product_code, error2, 14, 100);
  printf("Error 2: %s\n", error2);

  return 0;
}

void substring(char *orig, char *substr, int index, int length)
{
  if(index >= strlen(orig))
  {
    substr[0] = '\0';
    return;
  }

  int i = 0;
  while(i < length && orig[index + i] != '\0')
  {
    substr[i] = orig[index + i];
    i++;
  }
  substr[length] = '\0';
}