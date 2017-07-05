#include<stdio.h>
#include<string.h>
char s[1100];
int main() {
    scanf("%s", s);
    int n = strlen(s);
    int sum = 0;
    int i;
    for (i = 0; i < n; i++) {
        int id = s[i] - '0';
        sum += id;
    }
    sum %= 3;
    if (sum == 0) {
        printf("God\n");
    } else {
        printf("Issac\n");
    }
    return 0;
}