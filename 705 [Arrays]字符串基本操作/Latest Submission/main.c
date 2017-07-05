#include <stdio.h>
#include <string.h>
void compare(char *str1, char *str2);
int main() {
  char str1[100], str2[100];
  int n, x, y, result, length, i;
  scanf("%s", str1);
  scanf("%s", str2);
  scanf("%d%d%d", &n, &x, &y);
  compare(str1, str2);
  strncat(str1, str2, n);
  for ( ; x <= y; ++x) {
    if (str1[x] >='a' && str1[x] <= 'z')
      str1[x] -= 32;
  }
  length = strlen(str1);
  printf("the length of \"%s\" is %d\n", str1, length);
  strcpy(str2,str1);
  for (i = 0; i < length; ++i) {
    if (str2[i] >='A' && str2[i] <= 'Z')
    str2[i] += 32;
  }
  compare(str1, str2);
  if (length / 2 - 10 > 0)
    printf("%s\n", str1);
  else
    printf("%s\n", str2);
  return 0;
}
void compare(char *str1, char *str2) {
  int result;
  result = strcmp(str1, str2);
  if (result > 0)
    printf("%s > %s\n", str1, str2);
  else if (result == 0)
     printf("%s = %s\n", str1, str2);
  else
    printf("%s < %s\n", str1, str2);
}