#include <stdio.h>
#include <stdlib.h>

int main()
{

    int x,y;
    char z;
    scanf("%d %d",&x,&y);
    if((x>=0&&x<=15)&&(y>=0&&y<=15)){
        x=x<<4;
        z=x | y;
        printf("%d\n",z);
    }else{
        printf("error");
    }


    return 0;
}
