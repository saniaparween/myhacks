#include<stdio.h>
#include<stdlib.h>

void create();
void display();

struct node{ 
  char name[10];
  int roll;
  int marks;
  struct node *next;
}s;

struct node *head=NULL;

void main(){
   int ch;
   while(1){
       
  	 printf("Press 1 to create a link list\n");
   	 printf("Press 2 to display\n");
   	 printf("Enter your choice\n");
   	 scanf("%d",&ch);

     switch(ch){ 
        case 1: 
          create();
  		    break;
  	   case 2:
          display();
          break;
      }
    }
}


void create(){ 
  struct node *temp, *t;
  temp=(struct node*)malloc(sizeof(struct node));
  printf("Enter roll no.\n");
  scanf("%d",&temp->roll);
  printf("Enter the name\n");
  scanf("%s",temp->name);
  printf("Enter the marks\n");
  scanf("%d",&temp->marks);
  temp->next=NULL;
  if(head==NULL){
		head=temp;
  }
	else{
       t=head;
	     while(t->next!=NULL){
              t=t->next;
	     }
	     t->next=temp;
	}
}

void display(){ 
  struct node *t;
  t=head;
  while(t!=NULL){ 
    printf("Roll no.:%d\tName:%s\tMarks:%d\n",t->roll,t->name,t->marks);
    t=t->next;
  }
}