/*
    02. Check Odd/Even for 5 Integer Numbers.
*/
#include<stdio.h>
int main()
{
    int num,i;
    scanf("%d",&num);
    for(i =0; i<5; i++)
    {
        if(num%2 == 0)
        {
            printf("%d  Even Number %d\n",i,num);
        }
        else
        {
          printf("%d  Odd Number %d\n",i,num);
        }
           num--;
    }


    return 0;
}
