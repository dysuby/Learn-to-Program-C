#include <stdio.h>
#include <math.h>
int main()	{
  double realnum,result;
  scanf("%lf", &realnum);
  if (realnum < (-1))	{
    result = realnum + 1;
	printf("%.2lf\n", result);
  }	 else if (realnum < 1)	{
       result = fabs(realnum);
	   printf("%.2lf\n", result);
  }  else  {
	   result = log10(realnum);
	   printf("%.2lf\n", result);
  }
  return 0;
}