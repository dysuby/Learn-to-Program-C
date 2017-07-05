#include <stdio.h>
int main() {
    int l, n, left, right, tree[10010], i, ans = 0;
    scanf("%d%d", &l, &n);
    for (int i = 0; i <= l; i++)
        tree[i] = 1;
    while (n--) {
        scanf("%d%d", &left, &right);
        for (i = left; i <= right; i++) {
            tree[i] = 0;
        }
    }
    for (i = 0; i <= l; i++) {
        ans += tree[i];
    }
    printf("%d\n", ans);
    return 0;
}
