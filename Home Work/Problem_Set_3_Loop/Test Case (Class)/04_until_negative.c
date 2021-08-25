/*
    04. Check Odd/Even until negative input.
*/
#include<stdio.h>
int main()
{
    int num,i;

    for(i =0; num>0; i++)
    {
        scanf("%d",&num);
        if(num>0)
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
        else
        {
            printf("\n  %d This is your negative input\n",num);
        }

    }


    return 0;
}
