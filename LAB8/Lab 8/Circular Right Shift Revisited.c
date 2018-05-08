#include <stdio.h>
#include <stdlib.h>


//reverse elements of subarray from a[left] to a[right]
void reverse(int a[], int left, int right) {
    int i,j;
    for(i=left,j=right;i<left+((right-left+1)/2);i++,j--)
    {
        a[i]=a[i]^a[j];
        a[j]=a[j]^a[i];
        a[i]= a[i]^a[j];
    }
}

// shift the subarray a[left...right] to the right
//use reverse() as stated above
void shift(int a[], int left, int right, int k) {
    if (k<= right - left + 1)
    {
        reverse(a,left,right);
        reverse(a,left,left+k-1);
        reverse(a,left+k,right);
    }
    else
    {
        k=k%(right - left + 1);
        shift(a,left,right,k);
    }
}

// reads a single query and process it by updateing a[]
void process_query(int a[]) {
    int l,r,k;
    scanf("%d %d %d",&l,&r,&k);
    shift(a,l,r,k);
}

// scans array of size n
void scan_array(int a[], int n) {
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

}

// print array of size n
void print_array(int a[], int n) {
    int i;
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}


// don't change any thing in the main
int main() {


   int n, q;
   int i;
   scanf("%d", &n);
   int a[n];
   scan_array(a, n);
   scanf("%d", &q);
   for(i = 0; i < q; i++) {
      process_query(a);
   }

   print_array(a, n);


   return 0;
}
