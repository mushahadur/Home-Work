#include<stdio.h>
#define MAX_SIZE_A 10
int main()
{
    int a[MAX_SIZE_A] = {1,2,3,4,5},i,size=5,key = 5;
    int flag = 0,index = -1;
    for(i=0; i<size; i++){
        if(key==a[i]){
        index = i;
        break;
        }
    }
        if(index == -1){
                 printf("Not Found Index\n");

                }
        else{
            printf("Found\n");
                printf("Index : %d\n",index);
        }

    return 0;
}

