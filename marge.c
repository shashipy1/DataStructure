#include<stdio.h>
#include<conio.h>
    void printArray(int *A, int n)
    {
        for(int i=0; i<n; i++)
        {
            printf("%d ",A[i]);
        }
            printf("\n");
    }
    
    void merge(int A[],int  mid, int low,int high)
    {
        int i,j,k,B[100];
        i = low;
        j = mid + 1;
        k = high;
        while(i<= mid && j<= high)
        {
             if(A[i]<A[j])
             {
             B[k] = A[i];
             i++; k++;
             }
             else{
                 B[k] = A[j];
                 j++; k++;
             }
        }
        while(i<=mid)
        {
            B[k] = A[i];
            i++; k++;
        }
        while(j<=mid)
        {
        B[k] = A[j];
        j++; k++;
        }
        for(int i = 0; i<=high; i++)
        {
            A[i]=B[i];
        }
    }
    
    void mergeSort(int A[], int low, int high)
    {
        int mid;
        if(low<high){
        mid = (low+high)/2;
        mergeSort(A, low, high); 
        mergeSort(A, mid+1, high);
        merge(A, mid, high, low);
        }
    }
    int main()
    {
        int A[]={3,8,5,9,2,4};
        int n = 6;
        printArray(A,n);
        mergeSort(A,0,6);
        printArray(A,n);
        return 0;
    }
    
    