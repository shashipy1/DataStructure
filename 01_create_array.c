#include<stdio.h>
#include<stdlib.h>
 struct myArray{
    int totol_size;
    int used_size;
    int *ptr;
 };
void craeteArray (struct myArray *a, int tsize, int usize){
//    int tsize, usize
    a->totol_size=tsize;
    a->used_size=usize;
    a->ptr=(int*)malloc(tsize *sizeof(int));
}
void show(struct myArray *a){
    for(int i=0; i<a->used_size; i++)
    { 
        printf("%d\n",(a->ptr)[i]);
    }
}
void setval(struct myArray *a){
    int n;
    for(int i=0; i<a->used_size; i++)
     {
        printf("Enter element %d: ", i);
        scanf("%d", &n);
        (a->ptr)[i]=n;
     }
}
int main(){
struct myArray marks;
craeteArray(&marks,10,3);
printf("we are running setval now\n");
setval(&marks);
printf("we are running show now\n");
show(&marks);
return 0;
}