#include<stdio.h>
int main()	{
	int max,i,counter,a;
	scanf("%d",&max);
	counter = 0;
	for(i = 0;i <= max;i++)	{  //i fronm 0 to max
		a = i;
		if(a == 0 || a == 1)
			printf("%d,",a);
		else	{
			while((a / 2) != 0)	{
				if((a % 2) == 1)
					counter++;
				a /= 2;
				if(a == 0 || a == 1)	{
				counter += a;
				break;
				}
			}
			if(i != max)
				printf("%d,",counter);
			if(i == max)
				printf("%d\n",counter);
			counter = 0;
		}
	}
	return 0;
} 