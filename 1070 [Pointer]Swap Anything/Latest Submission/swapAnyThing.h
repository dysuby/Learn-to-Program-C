#include <stdlib.h>
#include <string.h>
void swapAnyThing(void *a, void *b, size_t val_size) {
  void *temp = malloc(val_size);
  memset(temp, 0, val_size);
  memcpy(temp, a, val_size);
  memcpy(a, b, val_size);
  memcpy(b, temp, val_size);
  free(temp);
}