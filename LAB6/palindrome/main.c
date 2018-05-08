#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int x,i,flag=0;
    scanf("%d",&x);
    for(i=0;i<(int)sizeof(x)/2;i++){
        if(x%(int)pow(10,(i+1))!=x/pow(10,(int)sizeof(x)-i-1)){
            flag=1;
            break;
        }
           }
     if(flag==1){
         printf("%d is not a palindrome number\n",x);
     }else{
         printf("%d is a palindrome number\n",x);
      }




    return 0;
}
