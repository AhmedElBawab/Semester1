#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

long long int fun1(int x){
    return 3*pow(x,5)+2*pow(x,4)-5*pow(x,3)-pow(x,2)+7*x-6;
}

int main() {
    long long int x;
    scanf("%lld",&x);
    printf("%lld",fun1(x));

    return 0;
}
