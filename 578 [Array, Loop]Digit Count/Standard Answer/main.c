#include <stdio.h>
int main() {
    int t, n, i, j, k, num;
    scanf("%d", &t);
    while (t--) {
        scanf("%d", &n);
        int s[10] = {0};
        for (i = 1; i <= n; i++) {
            k = i;
            while (k > 0) {
                num = k%10;
                k /= 10;
                for (j = 0;j < 10; j++) {
                    if (num == j) {
                        s[j]++;
                        break;
                    }
                }
            }
        }
        for (i = 0; i < 10; i++) {
            if (i == 9) printf("%d\n", s[i]);
            else printf("%d ", s[i]);
        }
    }
    return 0;
}                                 