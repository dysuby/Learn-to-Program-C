#include<stdio.h>
int main()	{
	int ch,sum = 0;
	while((ch = getchar()) != '\n')	
		sum += (ch - 48);
	while(sum >= 10)	{
		if(sum >=100)
			sum = sum / 100 + (sum - sum / 100 * 100) / 10 + (sum - sum / 10 * 10);
		else
			sum = sum / 10 + (sum - sum / 10 * 10);
		}
	printf("%d\n",sum);
	return 0;
}