#include<stdio.h>

#include<string.h>


int main(){
	int i,j,l,m,q;
	char a[10][100],k[100];

	printf("Input the word\n");
	for(i=0; i<10; i++){
		scanf("%s",a[i]);
	}

	for(i=0; i<10; i++){
		printf("%s\n\n",a[i]);
	}
	
	for(i=0; i<9; i++){
		for(j=i+1 ; j<10; j++){
		if(strcmp(a[i],a[j])==1){
		l=strlen(a[i]);
		m=strlen(a[j]);
		for(q=0; q<l; q++){
		k[q]=a[i][q];		
		}
		k[l]='\0';
		for(q=0; q<m; q++){
		a[i][q]=a[j][q];		
		}
		a[i][m]='\0';
		for(q=0; q<l; q++){
		a[j][q]=k[q];		
		}
		a[j][l]='\0';
		}

		}
	}
	for(i=0; i<10; i++){
		printf("%s\n",a[i]);
	}
	

return 0;


}	
