#include <string.h>
#include "prefix.h"
char* prefix(const char* const s1, const char* const s2) {
  int i = 0, len = strlen(s1) < strlen(s2) ? strlen(s1) : strlen(s2);
  char str[100001] = {0};
  int k = 0;
  for (i = 0; i < len; i++) {
    if (s1[i] == s2[i]) {
      str[k++] = s1[i];
    } else {
      break;
    }
  }
  static char ret[10001] = {0};
  strcpy(ret, str);
  return ret;
}