#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main()
{
  int fd_to_read = open("sometext.txt", O_RDONLY);
  int fd_to_write = open("newtext2.txt", O_WRONLY | O_CREATE, S_IRUSR | S_IWUSR);

  if(fd_to_read == -1 || fd_to_write == -1){
    printf("One file wouldn't open!\n");
    return -1;
  }

  char c;
  int bytes;
  while((bytes = read(fd_to_read, &c, sizeof(c))) > 0){
    if(c == '.'){
      c = '!';
    }
    write(fd_to_write, &c, sizeof(c));
  }

  close(fd_to_read);
  close(fd_to_write);
}


//1 option
int main()
{
  FILE *file_to_read = fopen("sometext.txt", "r");
  FILE *file_to_write = fopen("newtext.txt", "w");

  if(file_to_read == NULL || file_to_write == NULL){
    printf("One file wouldn't open!\n");
    return -1;
  }

  char c;
  while((c = fgetc(file_to_read)) != EOF ){
    if(c == '.'){
      c = "!";
    }
    fputc(c, file_to_write);
  }

  fclose(file_to_read);
  fclose(file_to_write);
}