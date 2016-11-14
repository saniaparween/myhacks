#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <assert.h>
void insertionSort(int n, int a[]);
int main(void) {
  
   int n;
   scanf("%d", &n);
   int a[n],i;
   for(i = 0; i <n; i++) { 
   scanf("%d", &a[i]); 
   }

   insertionSort(n,a);
   
   return 0;
}
void insertionSort(int n, int a[]){
    int i,k,j,l,m;
    for(i=1; i<n; i++){
        k=a[i];
        j=i-1;
        while(a[j]>k){
            j--;
        }
        for(m=i; m>j+1; m--){
            a[m]=a[m-1];
        }
        a[m]=k;
        for(l = 0; l<n; l++) { 
         printf("%d ", a[l]); 
        }
        printf("\n");

        
        
     
    }
}    
    

