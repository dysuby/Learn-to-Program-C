#include<stdio.h>
int main()	{
	int counter1,counter2 = -1,counter3 = 0;
	char  a = '*';
	scanf("%d",&counter1);
	if (counter1>0)	{
		while(counter3!=counter1)	{
			while(counter2++<counter3) 	{ //循环直至counter2 等于counter3 
	 		printf("%c",a);}//打印* 
			counter2 = -1; //刷新counter2
			counter3++;
			printf("\n"); //换行 
	 		} 
	 	}
	return 0; 
	} 

