/*
    05. Check Leap Year or Not until end of file.
*/
#include<stdio.h>
int main()
{
    int year;

    while( scanf("%d",&year)!= EOF)
    {
        if (((year % 4 == 0) && (year % 100!= 0)) || (year%400 == 0))
            printf("%d is a leap year\n", year);
        else
            printf("%d is not a leap year\n", year);
    }

    return 0;
}

