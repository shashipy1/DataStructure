#include<stdio.h>
#include<stdlib.h>
 struct Node *f=NULL;
 struct Node *r=NULL;
 struct Node
 {
     int data;
     struct Node *next;
 };
void linkedListTraversal(struct Node * ptr) 
{
    printf("printing the element of this linked list\n");
    while(ptr!=NULL);
    {
        printf("element %d\n",ptr->data);
        ptr=ptr->next;
    }
 }
void enqueue(int val)
{
    struct Node *n=(struct Node*)malloc(sizeof(struct Node*));
    if(n==NULL){
        printf("queue is Full");
    }
    else{
    n->data=val;
    n->next=NULL;

   if(f==NULL){
    f=r=n;
}
   else{
    r->next=n;
    r=n;
}
}
}
int main(){
    linkedListTraversal(f);
    enqueue(3);
    enqueue(44);
    enqueue(48);
    linkedListTraversal(f);
    return 0;
}





 