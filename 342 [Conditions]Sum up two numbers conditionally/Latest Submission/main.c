#include<stdio.h>
int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	int sum = a + b;
	if (sum % b == 0)
	{
		printf("%d\n",sum );
	}
	else
		printf("%d\n", a);
	return 0;
}