#include <stdio.h>
#include <string.h>

void *mem_cpy(void *dest, void *src, int n);

typedef struct
{
  char name[256];
  int age;
  double average;
} Student;

int main()
{
  char src[] = "copy this";
  char dest[100];

  char *dest_ptr =  mem_cpy(dest, src, strlen(src) + 1);
  printf("src: %s\n", src);
  printf("dest: %s\n", dest);

  printf("dest_ptr: %p\n", dest_ptr);
  printf("dest: %p\n", dest);

  double src_array[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
  double dest_array[5];

  mem_cpy(dest_array, src_array, sizeof(src_array));

  for(int i = 0; i < 5; i++)
    printf("dest_array[%d] = %.1f\n", i, dest_array[i]);

  Student student1;
  strcpy(student1.name, "Sai");
  student1.age = 20;
  student1.average = 95.2;

  Student student2;
  memcpy(&student2, &student1, sizeof(Student));

  printf("Name: %s\n", student2.name);
  printf("Age: %d\n", student2.age);
  printf("Average: %.1f\n", student2.average);

  return 0;
}

void *mem_cpy(void *dest, void *src, int n)
{
  if(dest == NULL) return NULL;
  
  char *char_dest = (char *) dest;
  char *char_src = (char *) src;

  for(int i = 0; i < n; i++)
    char_dest[i] = char_src[i];
  
  return dest;
}