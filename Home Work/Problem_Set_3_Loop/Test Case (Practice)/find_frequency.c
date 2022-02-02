#include<stdio.h>
int main()
{
    long long int num,last_digit;
    int arr[10],i;
    scanf("%lld",&num);
    for(i=0; i<10; i++){
        arr[i]=0;
    }
    while(num != 0){
        last_digit= num%10;
        arr[last_digit]++;
        num = num/10;
    }
    printf("\nFrequency of Number :\n\n");
    for(i=0; i<10; i++){
        if(arr[i]>0){
            printf("%d ---> %d\n",i,arr[i]);
        }
    }

    return 0;

}
