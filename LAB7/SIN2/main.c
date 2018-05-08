#include<stdlib.h>
#include<stdio.h>
#include<math.h>
#define M_PI 3.14159265358979323846

// x is the base n is the terms i is the power

//changing into degree
double degree_to_radian(double x){
    return x=x*M_PI/180;
}

//getting factorial
double factorial(double i){
    int j;
    double f_i=1;
    for(j=2;j<=i;j++){
        f_i*=j;
    }
    return f_i;
}

//getting power
double power(double x, int i){
    int j;
    double result=1;
        for(j=0;j<i;j++){
            result*=x;
        }
    return result;
}

//SIN
double sin_cal(double x,int n){
   double ans = 0;
   int i,z,y;
   double temp;
   for(z=0,y=1,i=1;z<n;z++,y*=-1,i+=2){
       temp=y*power(x,i)/factorial(i);
       ans+=temp;
   }
    return ans;
}

int main() {
   double x;
   int n;
   scanf("%lf %d",&x,&n);

   x=degree_to_radian(x);

   printf("calculated %.10lf expected %.10lf\n",sin_cal(x,n),sin(x));


   return 0;
}





