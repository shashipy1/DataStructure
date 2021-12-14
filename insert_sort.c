#include<stdio.h>

void printArray(int* A, int n){
    for (int i = 0; i < n-1; i++)
    {
        printf("%d ",A[i]);
    }
    printf("\n");
    
}
void insertionSort(int *A, int n){
    int key, j;
    for(int i=1; i<=n-1; i++)
     {
         key = A[i];
         j = i-1;
        // loop for each pass 
        //A[j]>key:o/p-acsending,A[j]<key:o/p-dcending
        while( j>=0 && A[j] > key){
            A[j+1] = A[j];
            j--;

        }
        A[j+1] = key;
     }
 
}
int main(){
    //int n;
    // 0 1 2 3 4 5
    // 9 38 47 35 4
    int A[] = {9,38,47,35,27,4};
    int n = 6;
    printArray(A, n); 
    insertionSort(A, n);
    printArray(A, n); 

    return 0;
 }