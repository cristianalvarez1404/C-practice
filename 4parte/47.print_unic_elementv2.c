#include <stdio.h>
#include <stdbool.h>

void print_unique(int a[], int length);

int main(void)
{
  int a[] = {1,2,3,4,5,6,3,4,1,8,9,7,8};
  print_unique(a,13);

  return 0;
}

void print_unique(int a[], int length)
{
  for(int i = 0; i < length; i++)
  {
    bool match_found = false;
    for(int j = 0; j < length; j++){
      if(a[i] == a[j] && i != j)
        match_found = true;
    }
    if(!match_found) printf("%d\n",a[i]);
  }

}