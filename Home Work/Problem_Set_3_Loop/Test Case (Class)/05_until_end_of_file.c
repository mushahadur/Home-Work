/*
    05. Check Odd/Even until end of file.
*/
#include<stdio.h>
int main()
{
    int num;

    while( scanf("%d",&num)!= EOF)
    {
        if(num%2 == 0)
        {
           printf("%d is your Even Number\n",num);
        }
        else
        {
           printf("%d is your Odd Number\n",num);
        }

    }

    return 0;
}
