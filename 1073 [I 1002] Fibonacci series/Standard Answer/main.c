#include <stdio.h>

int fib(int n, int sum1, int sum2) {
    if (n == 1) return sum1;
    return fib(n - 1, sum2, sum1 + sum2);
}

int main() {
    int i = 0, n = 0;
    int mark[51] = {0};
    for (i = 1; i < 48; i++)
        mark[i] = fib(i, 0, 1);
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        int temp = 0, j = 0;
        scanf("%d", &temp);
        for (j = 1; j < 48; j++) {
            if (mark[j] == temp) break;
        }
        if (j == 48) printf("0\n");
        else printf("%d\n", j);
    }
    return 0;
}