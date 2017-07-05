#include <stdio.h>
int main()
{
    char a;
    int b;
    float c;
    unsigned d;
    long long e;
    double f;
    scanf("%c %d %f %u %lld %lf",&a,&b,&c,&d,&e,&f);
    printf("%c %d %1.2f %u %lld %1.7lf\n",a,b,c,d,e,f);
    return 0;
} 
