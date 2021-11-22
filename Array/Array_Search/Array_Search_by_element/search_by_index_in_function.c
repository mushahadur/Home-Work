#include<stdio.h>
#define MAX_SIZE_A 10
int search_array(int a[], int size, int key);
int main()
{
    int a[MAX_SIZE_A] = {1,2,3,4,5},i,size=5,key = 8;
    int flag = 0,index = -1;

    index = search_array(a, size, key);

    if(index == -1){
        printf("Not Found Index\n");
    }
    else{
        printf("Found\n");
        printf("Index : %d\n",index);
    }

    return 0;
}

int search_array(int a[], int size, int key){

   for(int i=0; i<size; i++){
        if(key==a[i]){
            return i;
        }
    }
    return -1;

}

