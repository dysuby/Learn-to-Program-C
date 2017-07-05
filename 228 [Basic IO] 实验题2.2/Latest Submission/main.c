#include<stdio.h>
int main()	{
	char a;
	int b;
	float c;
	long long int d;
	long long int e;
	double f;
	scanf("%c%d%f%lld%lld%lf",&a,&b,&c,&d,&e,&f);
	printf("%c %d %.2f %lld %lld %.7f\n",a,b,c,d,e,f);
	return 0;
}