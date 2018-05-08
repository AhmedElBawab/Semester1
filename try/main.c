#include <stdio.h>
#include <stdlib.h>

void mergsort(int arr[],int l,int r){

    if(r>l){
        int m=(r+l)/2;
        mergsort(arr, l,m);
        mergsort(arr,m+1,r);
        merg(arr,l,m,r);
    }
}

void merg(int arr[],int l,int m,int r){

    int nl=m-l+1;
    int nr=r-m;

    int L[nl];
    int R[nr];

    int i,j,k;

    for(i=0;i<nl;i++){
        L[i]=arr[l+i];
    }

    for(j=0;j<nr;j++){
        R[j]=arr[m+j+1];
    }

    i=0,j=0,k=l;

    while(i<nl&&j<nr){
        if(L[i]<=R[j]){
            arr[k]=L[i];
            i++;
        }else{
            arr[k]=R[j];
            j++;
        }
        k++;
    }

    while(i<nl){
        arr[k]=L[i];
        i++;
        k++;
    }

    while(j<nr){
        arr[k]=R[j];
        j++;
        k++;
    }

}

int main()
{
    int arr[]={3,4,100,3,5,6,1,0,8,2};

    int arr_size=sizeof(arr)/sizeof(arr[0]);

    mergsort( arr, 0, arr_size-1);

    int i;

    for(i=0;i<arr_size;i++){
        printf("%d ",arr[i]);
    }

    return 0;
}
