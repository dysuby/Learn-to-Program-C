#include <stdio.h>
#include <string.h>
#include "prefix.h"

int main() {
  char s1[] = "distance";
  char s2[] = "disjoint";
  puts(prefix(s1, s2));

  char* s3 = "distance";
  char* s4 = "";
  printf(":%s:\n", prefix(s3, s4));

  char* s5 = "distance";
  char* s6 = "dist";
  puts(prefix(s5, s6));
}
