#include <stdio.h>

int main()
{
  FILE *numbers_file;

  numbers_file = fopen("numbers.dat", "r");

  if(numbers_file == NULL) 
  {
    printf("Error opening file.\n");
    return 1;
  }

  double next_number = 0;
  int remaining_group_numbers = 0;
  int group_length;
  double total = 0;

  while (!feof(numbers_file))
  {
    if(remaining_group_numbers == 0)
    {
      fscanf(numbers_file, "%d", &group_length);
      remaining_group_numbers = group_length;
      printf("The number of elements in this group is %d\n", group_length);
      printf("The data in this group is: ");
    }
    else
    {
      fscanf(numbers_file, "%lf", &next_number);
      printf("%.0lf ", next_number);
      
      total += next_number;
      remaining_group_numbers--;

      if(remaining_group_numbers == 0)
      {
        printf("\nAverage: %.2f\n\n", total / group_length);
        total = 0;
      }
    }
  }
  


  return 0;
}