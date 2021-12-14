#include<stdio.h>
#include<stdlib.h>
   struct node{ 
       int p;
       int data,ptr;
       struct node *next;
   };
void linkedListTraversal(struct node *ptr){
    // printf("%d\n", *ptr);
    while(ptr!=NULL){
        printf("Element %d\n", ptr->data);
        ptr = ptr->next;
        // printf("%d\n", ptr);
    }
};  

struct node * insertAttFirst(struct node *head, int data){
    struct node * ptr=(struct node*)malloc(sizeof(struct node*));
    ptr->next=head;
    ptr->data=data;
    return ptr;
}

   int main(){
     struct node *head;
     struct node *second;
     struct node *third;
     struct node *fourth;
// Allocate memory for nodes in the linked list in heap
head=(struct node*)malloc(sizeof(struct node));
second=(struct node*)malloc(sizeof(struct node));
third=(struct node*)malloc(sizeof(struct node));
fourth=(struct node*)malloc(sizeof(struct node));
// link head to second
        head->data=67;
        head->next=second;
//  link second to third
        second->data=47;
        second->next=third;
// link third to fourth
       third->data=18;
       third->next=fourth;
// terminate the list at the fourth node
       fourth->data=38;
       fourth->next=NULL;
       printf("Linkelist before insertion on bignning\n");
       linkedListTraversal(head);
       head=insertAttFirst(head,34);
       printf("Linklist after insetion on bignning\n");
      // printf("Linklist after insetion on bignning\n");
       linkedListTraversal(head);
       return 0;
   }             