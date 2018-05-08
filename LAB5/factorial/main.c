#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,sum=1;
    printf("please enter n<=12\n");
    scanf(" %d",&n);
    for(i=0;i<n;i++){
        sum=(n-i)*sum;
    }
    printf("factorial is %d",sum);




    return 0;
}
