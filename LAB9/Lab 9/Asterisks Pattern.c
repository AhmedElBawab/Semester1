#include <stdio.h>

void printStars(int k)
{
    int i;
    for(i=0;i<k;i++)
        printf("*");
    printf("\n");
}

void pattern(int k, int n)
{
    if (k<=n)
    {
        printStars(k);
        k++;
        pattern(k,n);
    }
    else if (k>n && k<=(2*n-1))
    {
        printStars(2*n-k);
        k++;
        pattern(k,n);

    }
}

int main()
{
    int n,k=1;
    scanf("%d",&n);
    pattern(k,n);
    return 0;
}
