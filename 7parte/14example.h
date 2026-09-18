#ifndef EXAMPLE_H
#define EXAMPLE_H

typedef struct vector {
  float x;
  float y;
} vector_h;

// Function declaration for the ability to add two vectors
void Add(vector_h* out, const vector_h* in);

#endif