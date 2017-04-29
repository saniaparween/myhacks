#include <stdio.h>
#include <stdlib.h>

#define max 100

#define initial 1
#define waiting 2
#define visited 3

void create_graph();
void bfs_traversal();
void bfs(int);
void insert_queue(int);
int delete_queue();
int queue_empty();

int a[max][max],n;
int front=-1, rear=-1, queue[max],state[max];

int main()
{
   create_graph();
   bfs_traversal();

   return 0;
}

void create_graph(){

    int i,origin,destination, max_edge;

    printf("\nInput the no. of vertices: ");
    scanf("%d",&n);
    max_edge=n*(n-1);
    printf("\nInput -1 -1 to quit");
    for(i=0; i<max_edge; i++){

        printf("\nInput the vertices for edge %d : ",i);
       // printf("\nInput -1 -1 to quit: ");
        scanf("%d%d",&origin,&destination);

        if(origin==-1 && destination==-1)
            break;
        if(origin<0 || destination<0 || origin>n || destination>n){
            printf("\nn Invalid Edge!!");
            i--;
        }
        else
            a[origin][destination]=1;
   }
}

void bfs_traversal(){

    int v,i;

    for(i=0; i<n; i++){
        state[i]=initial;
    }
    printf("\n Input the starting vertex: ");
    scanf("%d",&v);
    if(v<0 || v>n){
        printf("\n Invalid starting vertex");
    }
    else {
       bfs(v);
     }
}
void bfs(int v){
    int i;
    insert_queue(v);
    state[v]=waiting;

    while(!queue_empty()){

        v=delete_queue();
        printf("%d\n",v);
        state[v]=visited;

        for(i=0; i<n; i++){
                if(a[v][i]==1 && state[i]==initial){
                    insert_queue(i);
                    state[i]=waiting;
                }
        }
   }
}

void insert_queue(int v){

      if(rear==max-1)
        printf("\n Queue full");

      if(front==-1)
        front=0;
      queue[++rear]=v;

    }

int delete_queue(){

    if(queue_empty()==1)
        printf("Queue Underflow!!");

    else{
    int delete_item;
    delete_item = queue[front];
    front++;
    return delete_item;
    }
}

int queue_empty(){

    if(front==-1 || front>rear)
        return 1;
    else
        return 0;
    }










