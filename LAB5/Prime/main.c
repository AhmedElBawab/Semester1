#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    printf("please enter the number\n");
    scanf(" %d",&x);

    if(x==0||x==1||x==2||x==3||x==5||x==7){
        switch(x){
            case(0):printf("not prim\n");break;
            case(1):printf("not prim\n");break;
            case(2):printf("prim\n");break;
            case(3):printf("prim\n");break;
            case(5):printf("prim\n");break;
            case(7):printf("prim\n");break;
        }
    }else{
        if(x%2&&x%3&&x%5&&x%7){
            printf("prim\n");
        }else{
            printf("not prim\n");
            }
    }

    return 0;
}
