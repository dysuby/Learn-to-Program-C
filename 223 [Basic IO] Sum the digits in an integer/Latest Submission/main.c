#include<stdio.h>
int main()	{
	int num,a,b,c,sum;
	scanf("%d",&num);
	a = num / 100;
	b = (num % 100) / 10;
	c = num % 10;
	sum = a + b + c;
	printf("%d\n",sum);
	return 0;
}