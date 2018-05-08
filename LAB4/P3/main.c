#include <stdio.h>
#include <stdlib.h>

int main()
{

    int y;
    scanf("%d",&y);
    if(y%4==0){
        if(y%100==0)
            if(y%400==0)
                printf("Leap\n");
            else{
                printf("Not Leap\n");}
        else{
            printf("Leap\n");
        }}
    else{
        printf("Not Leap\n");
        }


    return 0;
}
