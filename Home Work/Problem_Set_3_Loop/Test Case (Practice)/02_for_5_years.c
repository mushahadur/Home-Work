/*
    02. Check Leap Year or Not for 5 Years.
*/
#include<stdio.h>
int main()
{
    int year,i;
    scanf("%d",&year);
    for(i =0; i<5; i++)
    {
        if (((year % 4 == 0) && (year % 100!= 0)) || (year%400 == 0))
            printf("%d is a leap year\n", year);
        else
            printf("%d is not a leap year\n", year);

        year--;
    }


    return 0;
}
