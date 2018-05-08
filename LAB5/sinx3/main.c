#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define M_PI 3.14159265358979323846
int main()
{
    int n,i,m=1,f=1,base;
    double x,num,sum=0;
    scanf(" %lf %d",&x,&n);
    x = (x * M_PI) / 180;
    for(i=0;i<n;i++){
        base=pow(x,m);
        for(i=0;i<m;i++){
            f=(m-i)*f;
        }
        num=base/f;
        if(i%2==0){
            sum+=num;
        }else{
        sum-=num;}
        m+=2;
    }
    printf("calculated %lf expected %lf\n ",sum,sin(x));
    return 0;
}
