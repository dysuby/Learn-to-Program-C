#include<stdio.h>
int main()	{
	int height, n;
	scanf("%d%d",&height,&n);
	int apples[n];
	int cou,sum = 0;
	for(cou = 0;cou<n;cou++)	{
		scanf("%d",&apples[cou]);
		if (apples[cou]<=height)
		sum++;
	}
	printf("%d\n",sum);
	return 0;
}