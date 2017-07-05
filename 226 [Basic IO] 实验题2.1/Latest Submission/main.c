#include<stdio.h>
#include<math.h>
int main()	{
	int a,b,c;
	float x,y;
	double a1,a2,a3,a4;
	scanf("%d%d%d%f%f",&a,&b,&c,&x,&y);
	a1 = 1200 / ( 24 - 4 * 5 ) ;
	a2 = c * pow( a * a + b * b , 0.5 ) ;
	a3 = log(log( pow(10,3.5) + 2 ) );
	a4 = y + a % 5 * (int)(x + y) / 2 % 4;
	printf("%.3f\n%.3f\n%.3f\n%.3f\n",a1,a2,a3,a4);
	return 0;
}