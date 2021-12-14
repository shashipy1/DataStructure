#include<stdio.h>
#include<stdlib.h>
  struct stack
  {
      int size;
      int top;
      int *arr;
  };
  int isEmpty(struct stack *ptr){
      if(ptr->top==-1){
          return 1;
      }
      else{
          return 0;   
      }
  }
  int isFull(struct stack *ptr){
      if(ptr->top==ptr->size-1){
          return 1;
      }
      else
      {
         return 0;
      }
  }
  void pop(struct stack *ptr){
      if(isEmpty(ptr)){
          printf("stack Underflow!cannot pop from the stack\n");
          return -1;
      }
      else
      {
          int val=ptr->arr[ptr->pop];
      }
  }
 int main(){
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;
  head=(struct Node*)malloc(sizeof(struct Node));
  second=(struct Node*)malloc(sizeof(struct Node));  
  third=(struct Node*)malloc(sizeof(struct Node));  
  fourth=(struct Node*)malloc(sizeof(struct Node));  
         head->data=4;
         head->next=second;
         second->data=3;
         second->next=third;
         third->data=6;
         third->next=fourth;
         fourth->data=1;
         fourth->next=head;
     printf("Circular Linked list before insertion\n");
     linkedListTraversal(head);
     head=insertAtFirst(head,54);
     printf("Circular Linked list after insertion\n");
     linkedListTraversal(head);
    return 0;
}
