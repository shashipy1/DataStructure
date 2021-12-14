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
void isEmpty(struct queue *q){
    if(q->f==q->r){
    return 1;
}
    return 0;
}
int dequeue(struct queue *q,int val){
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
    q.size=100;
    q.f=q.r=-1;
    q.arr=(int*)malloc(q.size*sizeof(int));
    if(isEmpty(&q)){
    printf("QUEUE IS EMPTY");
    dequeue(&q,26);
    dequeue(&q,47);

    return 0;
}

