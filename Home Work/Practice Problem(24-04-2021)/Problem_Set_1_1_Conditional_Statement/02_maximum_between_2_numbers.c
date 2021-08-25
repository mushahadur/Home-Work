/*
   02.Find Maximum between 2 numbers.
*/
#include<stdio.h>
int main()
{
    int num1, num2;
    scanf("%d%d",&num1,&num2);
    if(num1>num2)
    {
        printf("The Maximum Number is  : %d\n",num1);
    }
    else
    {
        printf("The Maximum Number is  : %d\n",num2);
    }

    return 0;
}

