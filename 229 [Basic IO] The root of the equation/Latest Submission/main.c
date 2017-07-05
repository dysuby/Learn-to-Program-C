#include<stdio.h>
#include<math.h>
int main()	{
	int a,b,c;
	float x1,x2;
	scanf("%d%d%d",&a,&b,&c);
	x1 = (-b+sqrt(b*b-4*a*c))/(2*a);
	x2 = (-b-sqrt(b*b-4*a*c))/(2*a);
	printf("%.3f %.3f\n",x2,x1);
	return 0;
}