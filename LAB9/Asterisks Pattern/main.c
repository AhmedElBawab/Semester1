#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

void nasterisks1(int n){
    int i,asterisks='*';
    if(n==1){
        printf("%c",asterisks);
    }else{
        nasterisks1(n-1);
        for(i=0;i<n;i++){
            printf("%c",'*');
        }
    }
    printf("\n");
}

void nasterisks2(int n){
    int i,asterisks='*';
    if(n>0){
        for(i=n-1;i>0;i--){
            printf("%c",'*');
        }
        printf("\n");
        nasterisks2(n-1);
    }
}

int main()
{
    int n;
    scanf("%d",&n);
    nasterisks1(n);
    nasterisks2(n);

    return 0;
}
