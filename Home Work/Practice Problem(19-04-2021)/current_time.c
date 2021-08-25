/*
Input current time in HH:MM:SS (1:5:30) format and print in HH.MM.SS (01.05.30) format.
*/
#include<stdio.h>
int main()
{
    int h,m,s;
    scanf("%d:%d:%d",&h,&m,&s);
    printf("%02d.%02d.%02d\n",h,m,s);

    return 0;
}
