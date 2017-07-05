#include <stdio.h>
int matrix[101][101];
int main() {
    int n = 0, x = 0, y = 0, i = 0;
    enum direct{left, right, up, down} now = right;
    scanf("%d", &n);
    /* 向前探索 */
    for (i = 1; i <= n * n; i++) {
        matrix[x][y] = i;
        if (now == right) {
            x++;
            if (x + 1 == n || (x + 1 < n && matrix[x+1][y])) now = down;
        } else if (now == down) {
            y++;
            if (y + 1 == n || (y + 1 < n && matrix[x][y+1])) now = left;
        } else if (now == left) {
            x--;
            if (x == 0 || (x > 0 && matrix[x-1][y])) now = up;
        } else if (now == up) {
            y--;
            if (y == 0 || (y > 0 && matrix[x][y-1])) now = right;
        }
    }
    for (i = 0; i < n; i++) {
        int j;
        for (j = 0; j < n; j++) {
            if (j != 0) printf(" ");
            printf("%d", matrix[j][i]);
        }
        printf("\n");
    }
    return 0;
}
