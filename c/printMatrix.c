#include <stdio.h>
#include "lib/utils.h"

int main(){
    int matrix[2][3] = { {1,2,3}, {4,5,6} };
    int rowLength = 2;
    int columnLength = 3;
    printMatrix( (int *)matrix, rowLength, columnLength); 
}