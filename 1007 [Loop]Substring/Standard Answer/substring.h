#include <string.h>

int getNumOfSubstring(char a[], char b[]) {
	int len1 = strlen(a), i;
	int len2 = strlen(b), count = 0;
	if (len2 > len1) return 0;
	for (i = 0; i+len2 <= len1; ++i) {
		if (strncmp(a+i, b, len2) == 0)
			count++;
	}
	return count;
}