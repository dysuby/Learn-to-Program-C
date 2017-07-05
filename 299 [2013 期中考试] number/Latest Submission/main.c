#include <stdio.h>
int main() {
	long long int num[100], num_n, counter = 2, prev1, prev2;
  scanf("%d%d%d", &num[0], &num[1], &num_n);
  while (counter + 1 <= num_n) {
    prev1 = counter - 1;
    prev2 = counter - 2;
    num[counter] = (num[prev1] * num[prev2]) % 10007;
    ++counter;
  }
  --counter;
  printf("%d\n", num[counter]);
  return 0;
}