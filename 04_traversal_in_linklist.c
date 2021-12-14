#include<stdio.h>
#include<stdlib.h>
   struct node{
       int data;
       struct node *next;
   };
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
       return 0;
}                






   