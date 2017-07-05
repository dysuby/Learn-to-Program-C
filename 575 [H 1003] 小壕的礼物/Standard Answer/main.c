#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>


/* 1003 */

int main() {
    /* stack simulation */
    char stack[1001][101] = {0};

    int n = 0, i = 0;
    char (*top)[101] = stack[0];  /* stack top (empty / next pos)*/
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        int operation = 0;
        char str[101] = {0};
        scanf("%d%s", &operation, str);

        if (operation == 1) {
            /* push */
            strcpy(top, str);
            top++;
        } else {
            /* pop */
            top--;
            printf("%s %s\n", str, top);
        }
    }
    return 0;
}