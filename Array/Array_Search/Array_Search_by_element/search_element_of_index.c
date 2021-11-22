#include<stdio.h>
#define MAX_SIZE_A 10
int main()
{
    int a[MAX_SIZE_A] = {1,2,3,4,5},i,size=5,key = 7;
    int flag = 0,index = -1;
    for(i=0; i<size; i++){
        if(key==a[i]){
        flag = 1;
        index = i;
        break;
        }
    }
        if(flag==1){
                printf("Found\n");
                printf("Index : %d\n",index);
                }
        else{
            printf("Not Found Index\n");
        }

    return 0;
}
