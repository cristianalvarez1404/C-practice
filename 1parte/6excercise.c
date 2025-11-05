#include <stdio.h>

/*
  Program that print a word by line
*/

int main() {
    int c;
    char word[50];
    int i = 0;

    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\n' || c == '\t') {
            if (i > 0) {          
                word[i] = '\0';   
                printf("%s\n", word);
                i = 0;            
            }
        } else {
            if (i < 49) {         
                word[i++] = c;
            }
        }
    }

    if (i > 0) {
        word[i] = '\0';
        printf("%s\n", word);
    }

    return 0;
}