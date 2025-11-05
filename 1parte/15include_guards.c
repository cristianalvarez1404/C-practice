#pragma once
#include <stdio.h>

// compilacion adicional - old version
#ifndef ARCHIVO_H
#define ARCHIVO_H

int suma(int a, int b);

#endif

// compilacion adicional - new version
#pragma once
int suma1(int a, int b);

int main(){

  // Include guards
  
  printf("Hello world");
  return 0;
}