#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int fun2(int x,int index){
    int i;
    for(i=0;i<index-1;i++){
        x=x/10;
    }
    return x%10;
}

int main() {

    int x;
    int index;
    scanf("%d %d",&x,&index);

    printf("%d",fun2(x,index));

    return 0;
}
