#include<stdio.h>
int main()	{
	int a,b,c,d;
	scanf("%d%d",&a,&b);
	scanf("%d%d",&c,&d);
	printf("%dx^2+%dx+%d\n",a*c,a*d+b*c,b*d);
	return 0;
}