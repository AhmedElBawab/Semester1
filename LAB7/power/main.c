#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,n;
    scanf("%d %d",&x,&n);

    int i;
    int y;
    y=x;
    for(i=0;i<n-1;i++){
        x=x*y;
    }

    printf("%d",x);


    return 0;
}
