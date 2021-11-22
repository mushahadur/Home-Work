#include<stdio.h>
#define  MAX_SIZE 10
int insert_at(int a[], int size, int index, int key);
int insert_after(int a[], int size, int index, int key);
void Print_Value(int a[], int size);
int main(){
    int a[MAX_SIZE] = {10,20,30,40,50},size = 5,index,key;
    Print_Value(a,size);

    size = insert_after(a,size, index=0, key=500);
    Print_Value(a,size);

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

 int insert_after(int a[], int size, int index, int key){

  return insert_at(a,size, index+1, key);

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

