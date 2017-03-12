/* This is a problem on Hackerrank, in which we have to rotate the elements of the array in left order. d is the no of rotations that needs to be performed. n is the no of elements in the array.*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int a[100001],d,n,i;
    scanf("%d%d",&n,&d);
    for(i=0; i<n; i++){
        scanf("%d",&a[i]);
    }
       for(i=0; i<n; i++){
           printf("%d ",a[(i+d)%n]);
                           
       } 
    return 0;
}

