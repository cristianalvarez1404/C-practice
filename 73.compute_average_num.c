#include <stdio.h>
#include <stdlib.h>

#define BSIZE 1024

int main()
{
  FILE *fh;
  char buffer[BSIZE];
  double current, max;
  int numbers = 0;
  double total, avg;

  fh = fopen("72.file.txt","r");

  if(fh == NULL)
  {
    printf("Error opening file.\n");
    return 1;
  }

  while(fgets(buffer,BSIZE,fh) != NULL)
  {
    current = atof(buffer);

    // if(numbers == 0) max = current;
    // else if(current > max) max = current;
    
    total += current;
    numbers++;
  }

  avg = total / numbers;

  fclose(fh);

  printf("Average => %.2f\n",avg);

  return 0;
}