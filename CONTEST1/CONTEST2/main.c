#include <stdio.h>
#include <stdlib.h>


long long  sum_of_array(int array[],int n){
    long long  i,count=0;
    for(i=0;i<n;i++){
        count+=array[i];
        }
    return count;
}

long long int to_binary(long long  n){
    long long  i;
    while(n/=2){
        i++;
    }
    return i;
}



int main()
{
    int t;
    scanf("%d",&t);

    int i,j,x;
    for(i=0;i<t;i++){
        int n,c=1;
        scanf("%d",&n);
        int array[n];
        for(x=0; x<n; x++){
            scanf("%d",&array[x]);
        }
        long long count = sum_of_array(array,n);
        int No_fB = to_binary(count);
        for(x=0; x<No_fB; x++){
            c += count%2;
            count /= 2;
        }
        printf("%d\n",c);
    }



    return 0;
}
