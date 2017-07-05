#include <stdio.h>
#include <ctype.h>
int main() {
  char a[51], b[51], ascii1[256], ascii2[256];
  int index1 = 0, index2 = 0, counter;
  for (counter = 0; counter < 256; ++counter) {
    ascii1[counter] = 0;
    ascii2[counter] = 0;
  }
  while (isalpha(a[index1] = getchar())) {
    ++ascii1[a[index1]];    
    ++index1;
  }
  while (isalpha(b[index2] = getchar())) {
    ++ascii2[b[index2]];    
    ++index2;
  }
  if (index1 == index2) {
    for (counter = 65; counter < 123; ++counter) {
      if (ascii1[counter] != ascii2[counter]) {
        printf("NO\n");
        break;
      }
      if (counter == 122)
        printf("YES\n");
    }
  } else {
    printf("NO\n");
  }
  return 0;
}