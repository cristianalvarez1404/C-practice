#include <stdio.h>
#include <stdlib.h>
#include "example.h"

//Function definition
void Add(vector_h* out, const vector_h* in){
  out->x = out->x + in->x;
  out->y = out->y + in->y;
}