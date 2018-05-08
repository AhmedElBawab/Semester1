#include <stdio.h>
#include <stdlib.h>


float PIE()
{
float sum = 0;
int i, sign = 1;
for(i=1 ; i<=99; i+=2)
{
sum += sign * (1.0/i);
sign *= -1;
}
sum *= 4;
return sum;
}

int main()
{

    double y=PIE();
    printf("%lf",y);

    return 0;
}
