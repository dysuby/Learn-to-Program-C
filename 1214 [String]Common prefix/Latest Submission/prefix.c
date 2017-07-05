#include <stdlib.h>
#include <string.h>
#include "prefix.h"
char* prefix(const char* const s1, const char* const s2) {
  static char result[15] = {0};
  int index1, index2 = 0;
  for (index1 = 0; *(s1 + index1) != '\0' && *(s2 + index1) != '\0'; ++index1) {
    if (*(s1 + index1) == *(s2 + index1)) {
      *(result + index2) = *(s1 + index1);
      ++index2;
    }
  }
  *(result + index2) = '\0';
  return result;
}