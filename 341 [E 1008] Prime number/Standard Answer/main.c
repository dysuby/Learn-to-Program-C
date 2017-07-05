#include <stdio.h>
#include <math.h>

int main()
{
    int num = 0, i = 0, top = 0, re = 1;
    scanf("%d", &num);

    if(num < 2){
        printf("No\n");
        return 0;
    }

    top = (int)(sqrt(num) + 1);

    for(i = 2; i < top; i++){
        if(num %  i== 0){
            re = 0;
            break;
        }
    }
    if(re) printf("Yes\n");
    else printf("No\n");
    return 0;
}