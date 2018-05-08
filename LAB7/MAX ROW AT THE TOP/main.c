#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    int array[n][m];

    //raeding array and getting index of greatest row
    int i,j,index,count2=-100000;
    for(i=0;i<n;i++){
        int count1=0;
        for(j=0;j<m;j++){
            scanf("%d",&array[i][j]);
            count1=count1+array[i][j];
        }
        if(count1>count2){
            count2=count1;
            index=i;
        }
    }

    //swapping rows
    int swapper;
    for(i=0;i<m;i++){
        swapper=array[0][i];
        array[0][i]=array[index][i];
        array[index][i]=swapper;
    }

    //printing array
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            printf("%d ",array[i][j]);
        }
        printf("\n");
    }









    return 0;
}
