#include <stdio.h>
int main()	{
	int a,counter1,counter2;
	for(scanf("%d",&a),counter1 = 0,counter2 = 1;counter2 <= a;counter2++)	{
		if(a % counter2 == 0)
			counter1++;
	}
	if(counter1 > 2 || counter1 == 1)
		printf("No\n");
	else
		printf("Yes\n");
	return 0;
}