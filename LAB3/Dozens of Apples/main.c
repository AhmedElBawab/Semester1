#include <stdio.h>
#include <stdlib.h>

int main()
{


        //x:apples,y:no,z:left//
    int x;
    printf("Please enter the number of apples:\n");
    scanf("%d",&x);
    printf("You have %d dozens of apples an %d apples are left",x/12,x%12);

    getchar();

    return 0;
}
