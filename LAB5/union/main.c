#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n1,i;
    scanf("%d",&n1);
    int arr1[n1];
    for(i=0; i<n1; i++){
        scanf("%d",&arr1[i]);
    }
    int n2,j;
    scanf("%d",&n2);
    int arr2[n2];
    for(j=0; j<n2; j++){
        scanf("%d",&arr2[j]);
    }
    int uni[40*(n1+n2)],
    intersec[20],
    new_arr1[n1],
    new_arr2[n2];
    int uni_pos = 0,arr1_pos=0,arr2_pos=0;
    // getting union , new arr1 and new arr2

    // getting new arr1
    for(i=0; i<n1; i++){
        int flag=0,m;
        for(m=0; m<arr1_pos; m++){
            if(arr1[i]==new_arr1[m]){
                flag=1;
                break;
            }
        }
        if(flag==0){
            new_arr1[arr1_pos] = arr1[i];
            arr1_pos++;
        }
    }

    // getting arr1 unduplicated elements
    for(i=0; i<arr1_pos; i++){
        int flag=0,m;
        for(m=0; m<uni_pos; m++){
            if(new_arr1[i]==uni[m]){
                flag=1;
                break;
            }
        }
        if(flag==0){
            uni[uni_pos] = new_arr1[i];
            uni_pos++;
        }
    }

    // getting new arr2
    for(i=0; i<n2; i++){
        int flag=0,m;
        for(m=0; m<arr2_pos; m++){
            if(arr2[i]==new_arr2[m]){
                flag=1;
                break;
            }
        }
        if(flag==0){
            new_arr2[arr2_pos] = arr2[i];
            arr2_pos++;
        }
    }

    // getting arr2 unduplicated elements
    for(j=0; j<arr2_pos; j++){
        int flag=0,m;
        for(m=0; m<uni_pos; m++){
            if(new_arr2[j]==uni[m]){
                flag=1;
                break;
            }
        }
        if(flag==0){
            uni[uni_pos] = new_arr2[j];
            uni_pos++;
        }
    }
    int inter_pos = 0;
    // getting intersection
    for(i=0; i<arr1_pos; i++){
        for(j=0; j<arr2_pos; j++){
            if(new_arr1[i]==new_arr2[j]){
                intersec[inter_pos] = new_arr1[i];
                inter_pos++;
                break;
            }
        }
    }
    printf("Array1: ");
    for(i=0; i<arr1_pos; i++){
        if(i==arr1_pos-1) printf("%d\n",new_arr1[i]);
        else printf("%d, ",new_arr1[i]);
    }

    printf("Array2: ");
    for(i=0; i<arr2_pos; i++){
        if(i==arr2_pos-1) printf("%d\n",new_arr2[i]);
        else printf("%d, ",new_arr2[i]);
    }

    printf("Union: ");
    for(i=0; i<uni_pos; i++){
        if(i==uni_pos-1) printf("%d\n",uni[i]);
        else printf("%d, ",uni[i]);
    }

    printf("Intersection: ");
    for(i=0; i<inter_pos; i++){
        if(i==inter_pos-1) printf("%d\n",intersec[i]);
        else printf("%d, ",intersec[i]);
    }

    return 0;
}
