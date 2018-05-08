#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int x,m;
    char y;

    scanf("%d %c %d",&x,&y,&m);


    if((y!='+')&&(y!='-')&&(y!='/')&&(y!='*')&&(y!='%')){
        printf("\"ERROR:Unsupported Operator!\".");
    }


    if(y =='+'){
        printf("%d%c%d=%d\n",x,y,m,x+m);
    }


    if(y =='-'){
        printf("%d%c%d=%d\n",x,y,m,x-m);
    }


    if(y =='/'){
        if(m==0){
            printf("\"ERROR:Division by zero is not allowed!\".");}
        else{
            printf("%d%c%d=%d\n",x,y,m,x/m);}
        }


     if(y =='*'){
        printf("%d%c%d=%d\n",x,y,m,x*m);
    }


     if(y =='%'){
        if(m==0){
            printf("\"ERROR:Division by zero is not allowed!\".");}
        else{
            printf("%d%c%d=%d\n",x,y,m,x%m);}
    }
    return 0;
}
