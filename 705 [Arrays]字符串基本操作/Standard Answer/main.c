#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main() {
    char str1[300] = {0}, str2[300] = {0};
    int n = 0;
    scanf("%s%s", str1, str2);

    if (strcmp(str1, str2) < 0) {
        printf("%s < %s\n", str1, str2);
    } else if (strcmp(str1, str2) == 0) {
        printf("%s = %s\n", str1, str2);
    } else {
        printf("%s > %s\n", str1, str2);
    }

    scanf("%d", &n);
    strncat(str1, str2, n);
    int x = 0, y = 0;
    scanf("%d%d", &x, &y);
    for (int i = x; i <= y; ++i) {
        str1[i] = toupper(str1[i]);
    }
    printf("the length of \"%s\" is %lu\n", str1, strlen(str1));

    strncpy(str2, str1, sizeof(str2));

    for (int i = 0; i < strlen(str2); ++i)
        str2[i] = tolower(str2[i]);

    if (strcmp(str1, str2) < 0) {
        printf("%s < %s\n", str1, str2);
    } else if (strcmp(str1, str2) == 0) {
        printf("%s = %s\n", str1, str2);
    } else {
        printf("%s > %s\n", str1, str2);
    }

    
    int len = strlen(str1);
    len = len/2-10;
    if (len > 0)
        printf("%s\n", str1);
    else
        printf("%s\n", str2);
    return 0;
}

