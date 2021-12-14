#include<stdio.h>
#include<stdlib.h>
   struct node{ 
       int data,ptr;
       struct node *next;
   };
void linkedListTraversal(struct node *ptr){
    while(ptr!=NULL){
        printf("Element %d\n", ptr->data);
        ptr = ptr->next;
    }
};  
// arr[i] = *ptr --> value or element =54,86 
// &arr[i] = ptr --> address in memory = 1964577, 547574
struct node * insertAttFirst(struct node * head, int data){
    struct node * ptr=(struct node*)malloc(sizeof(struct node*));
    ptr->next= head;
    head=ptr;
    return ptr;
} 
//Case1:-deleting the first element from the linked list
 struct node * deleteFirst(struct node * head){
     struct node * ptr = head;
     head->next=head;
     free(ptr);
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
       printf("Linked BEFORE deletion\n");
       head=deleteFirst(head);
       linkedListTraversal(head);
       printf("Linked AFTER deletion\n");
       linkedListTraversal(head);
       return 0;
   } 