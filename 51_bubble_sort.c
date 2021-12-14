#include<stdio.h>
void printArray(int* A, int n){
    for(int i=0; i<n; i++)
    {
        printf("%d ",A[i]);
    }
    printf("\n");

}
void bubbleSort(int *A, int n){
    int temp;
    for(int i=0; i<n-1; i++)//for number of pass
    {
        for(int j=0; j<n-1-i; j++)// for comparison of each
        {
            if(A[j]>A[j+1]){
                temp = A[j];
                A[j] = A[j+1];
                A[j+1] = temp;
                
            }

        }


    }
}

int main(){
    int A[] = {46,1,23,8,9,4,6};
    int n = 6;
    printf("printing the array before the sorting\n");
    printArray(A,n);
    bubbleSort(A,n);// function to sort the array
    printf("printing the array before the sorting\n");
    printArray(A,n);
    return 0;

}
