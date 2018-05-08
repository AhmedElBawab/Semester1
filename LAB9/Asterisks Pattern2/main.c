#include <stdio.h>

void Stars(int i)
{
    int j;
    for(j=0;j<i;j++)
        printf("*");
    printf("\n");
}

void ROW(int i, int n)
{
    if (i<=n)
    {
        Stars(i);
        i++;
        ROW(i,n);
    }
    else if (i>n && i<=(2*n-1))
    {
        Stars(2*n-i);
        i++;
        ROW(i,n);

    }
}

int main()
{
    int n,i=1;
    scanf("%d",&n);
    ROW(i,n);
    return 0;
}
