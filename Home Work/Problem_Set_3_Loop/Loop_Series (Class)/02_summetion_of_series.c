/*
    02. Summation of Series
        1 + 2 + 3 + 4 + .. + N
*/
#include<stdio.h>
int main()
{
    int n,i,sum=0;
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
      sum = sum+i;
    }
      printf("%d\n",sum);

    return 0;
}
