#include <stdio.h>
#include <stdlib.h>

/*void base1(int n,int base){
    if(n>base-1){
        base1(n/base,base);
        printf("%d",n%base);
    }else{
        printf("%d",n);
    }
}*/

void base2(int n,int base){
    if(n>base-1){
        base2(n/base,base);
        if((n%base)>9){
            printf("%c",(n%base)+55);
        }else{
            printf("%d",n%base);
            }
    }else{
        if(n>9){
            printf("%c",n+55);
        }else{
            printf("%d",n);
        }
    }
}

int main()
{
    int n,base;
    scanf("%d %d",&n,&base);

   // if(base<10){
          //  base1(n,base);
   // }else{
            base2(n,base);
   // }

    return 0;
}
