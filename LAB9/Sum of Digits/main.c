#include <stdio.h>
#include <stdlib.h>

int sum(int n){
    int all=0;
    if(n>=10){
        all=(n%10)+sum(n/10);
    }else{
        all+=n;
    }
    return all;
}

int main()
{
    int n;
    scanf("%d",&n);

    if(n<0){
        printf("%d",-1*sum(-1*n));
    }else{
        printf("%d",sum(n));
    }

    return 0;
}
