#include <stdio.h>
#include <stdlib.h>

int seq(int n){
    int number=1;
    if(n>0){
        number=1+seq(n-1);
        printf("%d ",number-1);
    }
    return number;
}

int main()
{
    int n;
    scanf("%d",&n);
    int y=seq(n);

    return 0;
}
