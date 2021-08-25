/*
   02.Is a number Positive/ Negative/ Zero?
*/
#include<stdio.h>
int main()
{
    int num;
    printf("Please Enter the Number :\n");
    scanf("%d",&num);
    if(num < 0)
    {
        printf("%d Is a Negative Number \n",num);
    }
    else if(num==0)
    {
        printf("%d Is a Zero Number \n",num);

    }
    else
    {
        printf("%d Is a Positive Number \n",num);

    }

        return 0;
}

