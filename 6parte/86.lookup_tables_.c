#include <stdio.h>

//look up tables
const char *messages[] = {
  "Not a party. You are alone.",
  "One is the loneliest number.",
  "Not lonely, but not party.",
  "Now we're talking.",
  "Now we're talking.",
  "Ah, yeah...",
  "Ah, yeah...",
  "Ah, yeah...",
  "Whoa. violated fire code!"
};

const int NUM_MESSAGES = (sizeof(messages) / sizeof(char *));

void print_party_size_info(size_t people) {
  if(people > NUM_MESSAGES - 1) {
    printf("%s\n", messages[NUM_MESSAGES - 1]);
  } else {
    printf("%s\n", messages[people]);
  }

  // if(people == 0) {
  //   printf("Not a party. You are alone.\n");
  // } else if (people == 1) {
  //   printf("One is the loneliest number.\n");
  // } else if (people == 2) {
  //   printf("Not lonely, but not party.\n");
  // } else if (people <= 4) {
  //   printf("Now we're talking.\n");
  // } else if (people <= 7) {
  //   printf("Ah, yeah...\n");
  // } else {
  //   printf("Whoa. violated fire code!");
  // }
}

int main() {
  print_party_size_info(0);
  print_party_size_info(1);
  print_party_size_info(2);
  print_party_size_info(3);
  print_party_size_info(4);
  print_party_size_info(5);
  print_party_size_info(7);
  print_party_size_info(35);
}