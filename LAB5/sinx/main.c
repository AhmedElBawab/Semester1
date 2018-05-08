#include<stdlib.h>
#include<stdio.h>
#include<math.h>
#define M_PI 3.14159265358979323846
int main() {
   double x,tot=0,ans = 0;
   int n,p=1,i,y=1,j;
   scanf("%lf %d", &x, &n);
   x = (x * M_PI) / 180;
   for(i=0;i<n;i++){
        double f=1;
        for(j=0;j<p;j++){
            f=(p-j)*f;
        }
        ans=y*pow(x,p)/f;
        tot+=ans;
        y*=-1;
        p+=2;
   }
   printf("calculated %.10lf expected %.10lf\n", tot, sin(x));
   return 0;
}
