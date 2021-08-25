/*
 Check the Even or Odd Number..
 */
#include <stdio.h>
int main()
{
    int num,check;
    scanf("%d",&num);
    check=num&1;
    switch (check)
    {
    case 0:
        printf("%d is the Even Number\n",num);
        break;
    case 1:
        printf("%d is the Odd Number\n",num);
        break;
    default:
        printf("Out of range");
        break;
    }
    return 0;
}
