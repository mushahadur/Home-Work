/*
   01.Find the Pass/ Fail.
*/
#include<stdio.h>
int main()
{
    int mark;
    printf("Please Enter the mark : 0 to 100 \n");
    scanf("%d",&mark);
    if(mark >= 40)
    {
        printf("You are Pass !\n");
    }
    else
    {
        printf("You are Fail !\n");

    }

    return 0;
}
