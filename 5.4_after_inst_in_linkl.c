#include<stdio.h>
#include<stdlib.h>
   struct node{ 
       int data,p;
      // int data,ptr;
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
struct node * insertAtFirst(struct node *head, int data){
    struct node * ptr=(struct node*)malloc(sizeof(struct node*));
    ptr->data=data;
    ptr->next=head;
} 
struct node * insertAtEnd(struct node *head, struct Node *prevNode, int data){
    struct node * ptr=(struct node*)malloc(sizeof(struct node*));
    ptr->data=data;
    ptr->next=prevNode->next;
    prevnode->next=ptr;
  
    return head;
}
struct node  * insertAtAfterNode(struct node *head, int data){
    struct node * ptr=(struct node*)malloc(sizeof(struct node*));
    ptr->data=data;
    struct node *p=head;
    while(p->next!=NULL){
          p=p->next;

    }
    p->next=ptr;
    p->next=NULL;
    return head;
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
       printf("link list before insertion\n");
      // insertAtEnd(head,78);
       linkedListTraversal(head);
       printf("link list after insertion\n");
       head=insertAtAfterNode(head,79);
       return 0;
   }             