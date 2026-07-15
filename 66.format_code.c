#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

char *base64_decode(const unsigned char *source, size_t length, size_t *result_length)
{
  static int base64_decode_table[256] = {-1};
  static bool decode_initialized = false;

  if (!decode_initialized) {
    for(int i = 0; i < 64; i++)
    {
      base64_decode_table[base64_chars[i]] = i;
    }
    base64_decode_table['='] = 0;
  }

  if(length % 4)
  {
    return NULL; // invalid base64 sequence
  }

  size_t output_capacity = ((length * 3) / 4) + 1;
  size_t output_length = 0;
  char *output = malloc(output_capacity);

  for(int i = 0; i < length; i += 4) {
    // decode next 4 bytes
    uint32_t tmp;
  }
}