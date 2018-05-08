#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,f,m;
    scanf("%d %d %d",&n,&f,&m);
    int array1[n][f];
    int array2[f][m];

    //reading array1
    int i,j;
    for(i=0;i<n;i++){
        for(j=0;j<f;j++){
            scanf("%d",&array1[i][j]);
        }
    }

    //reading array2
    for(i=0;i<f;i++){
        for(j=0;j<m;j++){
            scanf("%d",&array2[i][j]);
        }
    }

    //getteing new array
    int mul_array[n][m];
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            mul_array[i][j]=0;
        }
    }
    int k;
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            for(k=0;k<f;k++){
                mul_array[i][j]+=(array1[i][k])*(array2[k][j]);
            }
        }
    }

    //printing mul_array
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            printf("%d ",mul_array[i][j]);
        }
        printf("\n");
    }

    return 0;
}
