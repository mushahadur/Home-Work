#include<stdio.h>
#define MAX_SIZE_A 10
int main()
{
    int a[MAX_SIZE_A] = {1,2,3,4,5,6},i,size=6,key = 7;
    int flag = 0;
    for(i=0; i<size; i++){
        if(key==a[i]){
        flag = 1;
        break;
        }
    }
        if(flag==1){
                printf("Found\n");}
        else{
            printf("Not Found\n");
        }

    return 0;
}
