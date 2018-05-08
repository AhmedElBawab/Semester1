#include <stdio.h>
#include <stdlib.h>

//fun of fab
int fab(int n){
    int f=0;
    if(n==1){
        f=1;
    }
    if(n>1){
        f=fab(n-1)+fab(n-2);
    }
    return f;
}

int main()
{
    //Enter no.of terms
    int n;
    scanf("%d",&n);

    //print element
    printf("%d",fab(n));

    return 0;
}
