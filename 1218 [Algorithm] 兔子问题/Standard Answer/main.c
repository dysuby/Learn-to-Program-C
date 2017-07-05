#include <stdio.h>

/* 直接模拟 */

int main() {
    int adult = 0, child1 = 2, child2 = 0;
    int i = 0, n = 0, k = 0;
    int mark[100000] = {0}, input[10000] = {0}, max = 0;

    scanf("%d", &n);
    while (n > 0) {
        input[k++] = n;
        if (max < n) max = n;
        scanf("%d", &n);
    }

    for (i = 1; i < max + 1; i++) {
        mark[i] = adult + child1 + child2;
        adult += child2;
        child2 = child1;
        child1 = adult;
    }

    for (i = 0; i < k; i++) {
        printf("%d\n", mark[input[i]]);
    }

    return 0;
}