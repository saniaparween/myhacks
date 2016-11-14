#include <stdio.h>
#include "utils.h"


/**
Method to print array
**/
void printArray(int array[], int length){
	if (length < 1){
		printf("\n Array is Empty\n");
		return;
	}
	printf ("\n[ ");
	int i;
	for ( i=0;i<length;i++){
		if (i == 0){
			printf("%d",array[i]);
			continue;
		}
		printf(", %d",array[i]);
	}
	printf (" ]\n");
}



/**
Method to print matrix
**/

void printMatrix(int *arr, int rowLength, int columnLength){
	if (rowLength<1 || columnLength<1){
		printf("\n Empty Matrix\n");
		return;
	}
	int i,j;

	for(  i=0;i<rowLength;i++){
		printf ("\n[ ");
		for( j=0;j<columnLength;j++){
			if (j == 0){
				printf("%d",*((arr+i*columnLength) + j));
				continue;
			}
			printf(", %d",*((arr+i*columnLength) + j));
		}
		printf (" ]");
	}
	printf("\n");
}
