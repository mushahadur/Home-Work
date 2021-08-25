/*
    01. Printing Series Odd Number
        1 , 3, 5, 7, ..., 99
*/
#include<stdio.h>
int main()
{
    int i;
    for(i=1; i<=99; i++)
    {
        if((i%2!=0))
        printf("%d\n",i);
    }

    return 0;
}

