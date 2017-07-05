#include <stdio.h>
#include <stdlib.h>
#include <string.h> 
int cmp(const void *a, const void *b) {    
	return *(const char *)a - *(const char *)b;
} 
int isAnagram(char *a, char *b) {    
	char temp;    
	if (strlen(a) == strlen(b)) {        
		qsort(a, strlen(a), sizeof(temp), cmp);        
		qsort(b, strlen(b), sizeof(temp), cmp);    
	} else {        
		return 0;    
	}    
	return !strcmp(a, b);
} 
int main(void) {    
	char *s1, *s2;    
	s1 = (char*)malloc(sizeof(char*)*100);    
	s2 = (char*)malloc(sizeof(char*)*100);    
	scanf("%s", s1);    
	scanf("%s", s2);    
	if (isAnagram(s1, s2) == 1) {        
		printf("YES\n");    
	} else {        
		printf("NO\n");    
	}    
	free(s1);    
	free(s2);    
	return 0;
}