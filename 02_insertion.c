#include<stdio.h>
#include<stdlib.h>
void display(int arr[],int n){
    for(int i=0; i<n; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}

int indInsertion(int arr[], int size, int element, int capacity, int index){
    if(size>=capacity)
    {
        return -1;
    }
    
    for(int i=size-1; i>=index-1; i--)
    {
    arr[i+1]=arr[i];
    }
    arr[index]=element;
    return 1;
}
int main(){
    int arr[100]={7,9,8,23,57,56};
    int size=5 ,element=45,index=3;
    display(arr,size);
    indInsertion(arr,size,element,100,index);
    size++;
    display(arr,size);
    return 0;
}