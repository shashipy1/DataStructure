#include<stdio.h>
#include<stdlib.h>
struct queue{
    int size;
    int f;
    int r;
    int *arr;
};
int isFull(struct queue *q){
    if(q->r==q->size-1){ 
    return 1;
}
return 0;
}
int isEmpty(struct queue *q){
    if(q->r==q->f){
    return 1;
}
    return 0;
}
void enqueue(struct queue *q,int val){
    if(isFull(q))
    {
        printf("THIS QUEUE IS FULL");
    }
    else{
        q->r++;
        q->arr[q->r]=val;

    }
}
int main(){
    struct queue q;
    q.size=2;
    q.f=q.r=-1;
    q.arr=(int*)malloc(q.size*sizeof(int));
//if(isEmpty(&q)){
  //  printf("queqe is empty");
//}
//ENQUEUE FEW ELEMENT
enqueue(&q,46);
enqueue(&q,37);
if(isFull(&q)){
        printf("queue is full");
    }
if(isEmpty(&q)){
    printf("queqe is empty");
}
  return 0;
}

