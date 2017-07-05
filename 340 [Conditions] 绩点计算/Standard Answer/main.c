#include <stdio.h>

int main()
{
    int a=0;    
    scanf("%d",&a);
    if(a<0 || a>100){
        printf("Invalid\n");
    }
    else if(a<60){
        printf("Failed\n");
    }
    else{
        printf("%.1f\n",(float)(a-50)/10);
    }
    return 0;
}
