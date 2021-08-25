/*
 Check the Even or Odd Number..
 */
#include<stdio.h>
int main()
{
    int b,a;
    scanf("%d",&a);
    b=a&1;
    if(b==0)
    {
        printf("%d is the Even Number\n",a);
    }
    else
    {
        printf("%d is the Odd Number\n",a);
    }

    return 0;
}

