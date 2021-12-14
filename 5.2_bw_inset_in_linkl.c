#include<stdio.h>
#include<stdlib.h>
struct node{ 
       int p;
       int data,ptr;
       struct node *next;
};
void linkedListTraversal(struct node *ptr){
    while(ptr!=NULL){
        printf("Element %d\n", ptr->data);
        ptr = ptr->next;
    }
};  

struct node * insertAtFirst(struct node *head, int data){
    struct node * ptr=(struct node*)malloc(sizeof(struct node*));
    ptr->next=head;
    ptr->data=data;
    return ptr;
} 
struct node * insertAtIndex(struct node *head, int data, int index){
    struct node * ptr=(struct node*)malloc(sizeof(struct node*));
    struct node *p=head;
    int i=0;
    while(i=index-1){
        p=p->next;
        i++;
    }
    ptr->data=data;
    ptr->next=p->next;
    p->next=ptr;
    // head = *p;
    return p;
}
int main()
{
     struct node *head;
     struct node *second;
     struct node *third;
     struct node *fourth;
     struct node *he;
// Allocate memory for nodes in the linked list in heap
head=(struct node*)malloc(sizeof(struct node));
second=(struct node*)malloc(sizeof(struct node));
third=(struct node*)malloc(sizeof(struct node));
fourth=(struct node*)malloc(sizeof(struct node));

he = (struct node*)malloc(sizeof(struct node));
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
       printf("%d\n", head->data);
       linkedListTraversal(head);
       head = insertAtIndex(head,59,2);
    //    printf("%d\n", he->data);
       linkedListTraversal(head);
       return 0;
   }             