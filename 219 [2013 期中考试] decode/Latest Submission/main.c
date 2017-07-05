#include<stdio.h>
#include<string.h>
int main()	{
	char password[80];
	scanf("%s",&password);
	int index;
	for(index = 0;index<strlen(password);index++)	{
		if(password[index]<91)	{
			password[index] = 155 - password[index];
			printf("%c",password[index]);
		}
		else if(password[index]>96)	{
			password[index] = 219 - password[index];
			printf("%c",password[index]);
		}
	}
	printf("\n");
	return 0;
}