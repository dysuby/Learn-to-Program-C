#include <stdio.h>
int main()	{
  int num1,num2,middle;
  scanf("%d%d", &num1, &num2);
  (num1 > num2) ? num1 : num2;
  while (num1 % num2 != 0)	{
    middle = num1 % num2;
	num1 = num2;
	num2 = middle;
  }
  printf("%d\n", num2);
  return 0;
}