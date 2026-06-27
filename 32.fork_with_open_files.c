#include <sys/types.h>
#include <sys/wait.h>

int main(void)
{
  FILE *fp = fopen("test.txt", "w");

  fprintf(fp, "Hi\n");
  fflush(fp);

  if(fork() == 0)
  {
    fprintf(fp, "Child\n");
    fclose(fp);
  } 
  else 
  {
    wait(NULL);
    fprintf(fp, "Parent\n");
    fclose(fp);
  }

  return EXIT_SUCCESS;
}