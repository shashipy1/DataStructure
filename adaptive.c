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
    int isSorted = 0;
    for(int i=0; i<n-1; i++)//for number of pass
    {
        printf("working on pass number %d\n",i+1);
        isSorted = 1;
        for(int j=0; j<n-1-i; j++)// for comparison of each
        {
            if(A[j]>A[j+1]){
                temp = A[j];
                A[j] = A[j+1];
                A[j+1] = temp;
                isSorted = 0;
                
            }

        }
         if(isSorted){
             return;
         }
    }
}

int main(){
    //int A[] =  {4,9,2,58,3,5,4};
    int A[] = {4,5,8,9,13,24,25};
    int n = 7;
    printf("printing the array before the sorting\n");
    printArray(A,n);
    bubbleSort(A,n);// function to sort the array
    printf("printing the array after the sorting\n");
    printArray(A,n);
    return 0;

}
