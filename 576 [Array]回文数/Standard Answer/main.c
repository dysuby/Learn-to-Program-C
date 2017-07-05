#include <stdio.h>
#include <stdbool.h>

int main() {
	int n, num, i, count = 0;
	int digit[20] = {0};
	bool isPalindrome;

	scanf("%d", &n);
	for (i = 0; i < n; ++i) {
		scanf("%d", &num);
		isPalindrome = true;
		count = 0;

		while (num) {
			digit[count++] = num % 10;
			num /= 10;
		}

		for (int k = 0; k < count/2; ++k) {
			if (digit[k] != digit[count-1-k]) {
				isPalindrome = false;
				break;
			}
		}

		if (isPalindrome) {
			printf("Yes\n");
		} else {
			printf("No\n");
		}
	}
	return 0;
}