#include<stdio.h>
#include<stdio.h>

struct Node
{
    int data;
    struct Node *Next;
};

void linkListTraveral(struct Node *head){
  struct Node *ptr = head;
  printf("Element is %d\n",ptr->data);
  ptr = ptr->Next;

  while(ptr!=head){ 
  printf("Element is %d\n",ptr->data);
  ptr = ptr->Next;
}
}
int main(){
     struct Node *head;
     struct Node *second;
     struct Node *third;
     struct Node *fourth;
// Allocate memory for nodes in the linked list in heap
head=(struct node*)malloc(sizeof(struct Node));
second=(struct node*)malloc(sizeof(struct Node));
third=(struct node*)malloc(sizeof(struct Node));
fourth=(struct node*)malloc(sizeof(struct Node));
// link head to second
        head->data=67;
        head->Next=second;
//  link second to third
        second->data=47;
        second->Next=third;
// link third to fourth
       third->data=18;
       third->Next=fourth;
// terminate the list at the fourth node
       fourth->data=38;
       fourth->Next=head;
       linkListTraveral(head);
       return 0;
}      