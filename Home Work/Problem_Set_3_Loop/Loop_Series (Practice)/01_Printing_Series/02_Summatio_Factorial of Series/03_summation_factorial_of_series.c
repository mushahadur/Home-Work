/*
    03. Summation/Factorial of Series Even Number
        2 + 4 + 6 + 8 + ... + N
*/
#include<stdio.h>
int main()
{
    int n,i,sum=0;
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        if(i%2==0)
      sum = sum+i;
    }
      printf("%d\n",sum);

    return 0;
}



