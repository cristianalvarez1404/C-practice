#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#define PAGESIZE 4096

int main()
{
  uint8_t* first = mmap(NULL, PAGESIZE, PROT_READ | PROT_WRITE, MAP_PRIVATE | MAP_ANONYMOUS, -1, 0);

  uint8_t* second = mmap(NULL, PAGESIZE, PROT_READ | PROT_WRITE, MAP_PRIVATE | MAP_ANONYMOUS, -1, 0);

  printf("First: %p\n", first);
  printf("Second: %p\n", second);
}


// int main()
// {
//   void *first = sbrk(0);
//   void *second = sbrk(4096);
//   void *third = sbrk(0);

//   int *ptr = (int *)third+1;
//   *ptr = 0xDED;

//   printf("First: %p\n",first);
//   printf("Second: %p\n",second);
//   printf("Third: %p\n",third);
// }

// int main()
// {
//   for(int i = 0; i < 5; i++)
//   { 
//     char *ptr = malloc(500000);
//     printf("Got memory! (Address=%p)\n", ptr);
//   }
// }