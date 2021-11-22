#include<stdio.h>
#define  MAX_SIZE 10
int insert_at(int a[], int size, int index, int key);
void Print_Value(int a[], int size);
int main(){
    int a[MAX_SIZE] = {10,20,30,40,50},size = 5,index,key;
    Print_Value(a,size);
    for(int i=0; i<10; i++){
    size = insert_at(a,size, index=0, key = i*100+10);
    Print_Value(a,size);
    }
    /*
    size = insert_at(a,size, index=5, key=111);
    size = insert_at(a,size, index=5, key=112);
    size = insert_at(a,size, index=5, key=113);
    size = insert_at(a,size, index=5, key=114);
    size = insert_at(a,size, index=5, key=115);

    size = insert_at(a,size, index=5, key=116);
    size = insert_at(a,size, index=5, key=117);
    size = insert_at(a,size, index=5, key=118);
    size = insert_at(a,size, index=5, key=119);
    size = insert_at(a,size, index=5, key=120);

    Print_Value(a,size);

    */

    return 0;
 }
 int insert_at(int a[], int size, int index, int key){
    if(size == MAX_SIZE){
        printf("Array Overflow\n");
        return size;
    }
    if(index<0 || index>size){
        printf("Array Invalid index\n");
        return size;
    }
    int i;
    for(i=size; i>index; i--){
        a[i] = a[i-1];
    }
    a[index] =  key;
    size++;
    return size;
 }
void Print_Value(int a[], int size){
    if(size==0){
        printf("Array is Empty\n");
    }
    int i;
    for(i=0; i<size; i++){
        printf("%d  ",a[i]);
    }
    printf("\n");

}
