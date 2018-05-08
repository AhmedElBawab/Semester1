#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,q;
    int i,m,j;
    int x,y;
    printf("please enter q,n\n");
    scanf("%d %d",&q,&n);
    int a[n];

    for(i=0; i<n; i++)
    {
        printf("please enter ele\n");
        scanf(" %d",&a[i]);
    }
    for(j=0; j<q; j++)
    {
        int sum=0;
        printf("please enter x,y\n");
        scanf("%d %d",&x,&y);
        for(m=x; m<=y; m++)
        {
            sum+=a[m];
        }
        printf("%d\n",sum);
    }





    return 0;
}
