#include<stdio.h>
#include<stdlib.h>
void display(int arr[],int n){
    for(int i=0; i<n; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}
int intdeletion(int arr[], int size,int capacity,int index){
    if(size>=capacity)
    {
    return -1;
}

for(int i=index; i<size; i++){
   arr[i]=arr[i+1];
}

return 1;
}
int main(){
    int arr[100]={7,9,8,23,57,56};
    int size=6,index=3;
    display(arr,size);
    intdeletion(arr,size,100,index);
    size--;
    display(arr,size);
    return 0;
}