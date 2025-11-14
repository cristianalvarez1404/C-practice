#include <stdio.h>
#include <assert.h>
#define F fflush(stdout)

void multi(int table, int number);

int main(){
  int x, table;

  printf("Select multiplication table: "); F;
  scanf("%d", &table);
  assert(( table < 13) && (table > 0));

  for(x = 0; x <= 10 ; x++){
    multi(table, x);
  }
  
  return 0;
}

void multi(int table, int x){
  printf("%d\t", x * table);
}