#include <stdio.h>
 
int main(void) {
    int a, b, remain, temp;
    scanf("%d%d", &a, &b);
    if (a < b) {  /*make sure that a >= b*/
        temp = a;
        a = b;
        b = temp;
    }
    while (a % b != 0) {
        remain = a % b;
        a = b;
        b = remain;
    }
    printf("%d\n", b);
    return 0;
}