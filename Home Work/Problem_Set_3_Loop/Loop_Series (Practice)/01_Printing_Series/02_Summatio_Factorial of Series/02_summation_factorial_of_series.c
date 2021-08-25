/*
    02. Summation/Factorial of Series Odd Number
        1 + 3 + 5 + 7 + ... + N
*/
#include<stdio.h>
int main()
{
    int n,i,sum=0;
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        if(i%2!=0)
      sum = sum+i;
    }
      printf("%d\n",sum);

    return 0;
}


