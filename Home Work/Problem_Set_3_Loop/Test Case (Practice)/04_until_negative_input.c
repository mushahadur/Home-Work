/*
    04. Check Leap Year or Not until negative input.
*/
#include<stdio.h>
int main()
{
    int year,i;

    for(i =0; year>0; i++)
    {
        scanf("%d",&year);
        if(year>0)
        {

           if (((year % 4 == 0) && (year % 100!= 0)) || (year%400 == 0))
            printf("%d is a leap year\n", year);
        else
            printf("%d is not a leap year\n", year);
        }
        else
        {
            printf("\n  %d This is your negative Year\n",year);
        }
    }

    return 0;
}

