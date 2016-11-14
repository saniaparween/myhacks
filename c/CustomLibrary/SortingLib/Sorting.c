#include<stdio.h>
#include<stdlib.h>
#include "SortingLib.h"
int BubbleSort();
//void InsertionSort();


int BubbleSort(int Array[10], int Length){
int i,j,k;
for(i=0; i<=Array-2-i; i++){
     for(j=0; j<=Array-2; j++){
         if(Array[j]>Array[j+1]){
         k=Array[j];
         Array[j]=Array[j+1];
         Array[j+1]=k;
        }
	
     }
}
for(i=0; i<Length; i++)
printf("%d\n",Array[i]);
return Array;
}


