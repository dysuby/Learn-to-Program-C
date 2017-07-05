#include <stdio.h>
int main()	{
	int grades;
	float result;
	scanf("%d",&grades);
	if(grades <=100 && grades >=0)	{
		result = (grades - 50) / 10.0;
		if(result < 1.0)	{
			printf("Failed\n");
			}
		else {
			printf("%.1f\n",result);
		}
	}
	else	{
		printf("Invalid\n");
	}
	return 0;
}