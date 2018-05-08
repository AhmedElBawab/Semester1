#include <stdio.h>


long int sumOfDigits(long int n)
{
    long int res=0;
    if (n<10 && n>=0)
        res = n;
    else
        res =(n%10) + sumOfDigits(n/10);
    return res;
}


int main()
{
    long int n;
    scanf("%ld",&n);
    printf("Sum of digits of %ld = %ld",n,sumOfDigits(n));
    return 0;
}
