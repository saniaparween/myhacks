#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node *left;
	struct node *right;
};

struct node *create_node()
{	
	struct node *node=(struct node*)malloc(sizeof(struct node));
	int x;
	
	printf("\nEnter the data: ");
	scanf("%d",&x);
	if(x==-1)
		return NULL;
	
	node->data=x;

	printf("\nEnter the left node for %d: ",x);
	node->left=create_node();
	
	printf("\nEnter the right node for %d: ",x);
	node->right=create_node();
	
	return node;
}
	
void preorder(struct node *t){
	if(t!=NULL){
		printf("\n%d\n",t->data);
		preorder(t->left);
		preorder(t->right);
	}
}

void main(){
	struct node *root;
	printf("\nPlease enter -1 for no data input !\n");
	root=create_node();
	printf("\nThe preorder traversal is: ");
	preorder(root);
}
