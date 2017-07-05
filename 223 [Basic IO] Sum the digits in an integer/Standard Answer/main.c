#include <stdio.h>

int main() {
    int num = 0, LSD = 0, mid = 0;
    scanf("%d", &num);

    LSD = num % 10;
    num /= 10;
    mid = num % 10;
    num /= 10;

    printf("%d\n", LSD + mid + num);
    return 0;
}
