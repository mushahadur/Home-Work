/*
Input date in MM/DD/YYYY (12/01/2020) format and print in DD-MM-YYYY (01-12-2020) format.
*/

#include<stdio.h>
int main()
{
    int m,d,y;
    scanf("%d/%d/%d",&m,&d,&y);
    printf("%02d-%02d-%02d\n",d,m,y);

    return 0;
}

