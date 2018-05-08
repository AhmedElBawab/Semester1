#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int n,i,power=1,base,m,factor=1,y=1;
    double al,fin,x;

    printf("please enter x,n\n");
    scanf(" %lf %d",&x,&n);

    for(i=0;i<n;i++){
        base=pow(x,power);
        for(m=0;m<power;m++){
            factor=(power-m)*factor;
        }
        power+=2;
        al=base/factor;
        al*=y;
        y*=-1;
        fin+=al;

    }
    printf("calculated is %lf and exepected is %lf\n",fin,sin(x));







    return 0;
}
