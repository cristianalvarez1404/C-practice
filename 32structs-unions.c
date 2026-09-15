#include <stdio.h>

typedef union vec2 {
  // Underlying data
  float elements[2];

  // Anonymous structure
  struct {
    float width;
    float height;
  };

  struct {
    float x;
    float y;
  };
} vec2_t;

int main() {
  vec2_t point;
  point.x = 5.0f;
  point.y = 3.0f;

  vec2_t rectangle;
  rectangle.width = 100.0f;
  rectangle.height = 50.0f;

  printf("point.width = %f, point.height = %f\n",
    point.width,
    point.height
  );

  printf("rectangle.x = %f, rectangle.y = %f\n\n",
    rectangle.x,
    rectangle.y
  );
}