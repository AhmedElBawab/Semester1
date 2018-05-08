#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,k,i,temp,m;
    printf("please enter n & k\n");
    scanf(" %d %d",&n,&k);
    int a[n];
    for(m=0;m<n;m++){
        printf("please enter array \n");
        scanf(" %d ",&a[m]);
    }


    for(m=0;m<k;m++){
        for(i=1;i<n;i++){
            temp=a[n-i-1];
            a[n-i-1]=a[n-i];
            a[n-i]=temp;
        }
    }

    for(m=0;m<n;m++){
        printf("%d ",a[m]);
    }

    //////
    int n,k,i;
    printf("please enter n & k\n");
    scanf(" %d %d",&n,&k);
    int a[n];
    for(i=0;i<n;i++){
        printf("please enter array \n");
        scanf(" %d ",&a[(i+k)%n]);
    }
    for(i=0;i<n;i++){
        printf("%d ",a[m]);
    }






    return 0;
}
