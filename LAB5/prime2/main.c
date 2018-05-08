#include <stdio.h>
#include <stdlib.h>
int main()
{
    int x,i;
    scanf(" %d",&x);
    if(x==0||x==1){
        printf("%d is not prime",x);
    }else{
        for(i=2;i<=x;i++){
            if(x%i==0){
                if(x==i){
                    printf("%d is prime",x);
                    break;
                }else{
                    printf("%d is not prime",x);
                    break;
                }
            }
        }
    }

    return 0;
}
