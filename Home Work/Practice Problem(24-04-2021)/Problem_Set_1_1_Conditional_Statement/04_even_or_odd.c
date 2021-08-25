/*
   04.Check is a number EVEN or ODD.
*/
#include<stdio.h>
int main()
{
    int num ;
    scanf("%d",&num);
    if(num%2 == 0)
    {
        printf("%d is the EVEN Number\n",num);
    }
    else
    {
         printf("%d is the ODD Number\n",num);
    }

    return 0;
}
