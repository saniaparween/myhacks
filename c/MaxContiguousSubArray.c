#include<stdio.h>
int main(){
	int temp=0,max=0,i,a[1001],n;
	printf("Enter the range of array\n");
	scanf("%d",&n);
	for(i=0; i<n; i++){
	scanf("%d",&a[i]);	
	}
	for(i=0; i<n; i++){
		temp=temp+a[i];
		if(temp<0)
			temp=0;
		if(max<temp)
			max=temp;
	}
	printf("%d",max);
}
