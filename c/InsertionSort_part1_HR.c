#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <assert.h>
void insertionSort(int n , int a[]  ); 



int main(void) {
    int n;
    scanf("%d", &n);
    int a[n], i;
    for(i= 0; i < n; i++) { 
        scanf("%d", &a[i]); 
    }

    insertionSort(n,a);
    return 0;
}

void insertionSort(int n, int a[]){
    int k,i,j;
    k=a[n-1];
    for(i=n-2; i>=0; i--){
        
        if(a[i]>k){
            a[i+1]=a[i];
            for(j= 0; j < n; j++){
                   printf("%d ",a[j]);
            }
            printf("\n");
            if(i==0){
                a[i]=k;
                for(j= 0; j < n; j++){
                   printf("%d ",a[j]);
            }
                break;
            }
        }
        else{
            a[i+1]=k;
             for(i= 0; i < n; i++){
                      printf("%d ",a[i]);
              }
     	      break;        
          } 
    }
     
}
