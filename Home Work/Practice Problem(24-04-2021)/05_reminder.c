/*
   05.Find the Reminder of two numbers.
*/
#include<stdio.h>
int main()
{
    int num1, num2,reminder ;
    scanf("%d%d",&num1,&num2);
    reminder  = num1 % num2;
    printf("Reminder of two numbers : %d\n",reminder );

    return 0;
}



