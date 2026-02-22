#include <stdio.h>
#pragma pack(1)

struct store { //44 bytes => We waste a lot of memory here
  double price; // 8
  char *title; // 8
  char *author; // 8
  int num_pages; // 4
  int color; // 4
  int size; // 4
  char *design; // 8
};

struct store2 {
  double price; // 8 bytes
  union { // Remember => Union weight depends of the greatest variable have it
    struct {
      char *title; //8 bytes
      char *author;//8 bytes
      int num_pages;//4 bytes
    } book; // => This win because it has 20 bytes

    struct {
      int color; // 4 bytes
      int size; // 4 bytes
      char *design; // 8 bytes
    } shirt;

  } item;
};

int main(){
  struct store book; // we waste a lot of memory, because we dont use all the variables. we must to use UNIONS
  book.title = "The Alchemist";
  book.author = "Paulo Coelho";
  book.num_pages = 197;
  book.price = 23;
  printf("%ld bytes\n\n", sizeof(book));
  
  struct store2 s;
  s.item.book.title = "The Alchemist";
  s.item.book.author = "Paulo Coelho";
  s.item.book.num_pages = 197;
  printf("%s\n", s.item.book.title);
  printf("%ld", sizeof(s));
  
  return 0;
}