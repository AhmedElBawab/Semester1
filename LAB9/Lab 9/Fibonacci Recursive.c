#include <stdio.h>


int fib(int n)
{
    int res=0;
    if (n>1)
        res= fib(n-1)+fib(n-2);
    else if (n==1)
        res =1;
    return res;
}

int main()
{
    int d;
    scanf("%d",&d);
    printf("Fibonacci of %d = %d",d,fib(d));
    return 0;
}
