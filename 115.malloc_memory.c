#include <stdio.h>
#include <stdlib.h>

int main(){
  // malloc => It's a built-in function declared in the header file <stdlib.h>

  //malloc is the short name for "memory allocation" and is used to DYNAMICALLY allocate a single large block of contiguos memory according to the size specified.

  //Syntax (void*)malloc(size_t size)

  //malloc function simply allocates a memory block according to the size specified in the heap and on success it returns A POINTER pointing to the first byte of the allocated memory else returns NULL

  //size_t is defined in <stdlib.h> as unsigned int => The largest unsigned integer possible. The size can not be a negative number

  //int *ptr = (int *)malloc(4);

  int i, n;
  printf("Enter the number of integers: ");
  scanf("%d", &n);
  int *ptr = (int *)malloc(n * sizeof(int));

  if(ptr == NULL){
    printf("Memory not available.");
    exit(1); // => Termina inmediatamente el programa, y devuelve un código de salida al OS => 0 programa termino correctamente, 1 el programa termino con errores. Libera recursos. En main se utiliza el return 0 o 1, y en funciones exit()
  }

  for(i = 0; i < n; i++){
    printf("Enter an integer: ");
    scanf("%d", ptr + i);
  }

  for(i = 0; i < n; i++){
    printf("%d ", *(ptr + i));
  }

  free(ptr);
  ptr = NULL;
  
  return 0;
}