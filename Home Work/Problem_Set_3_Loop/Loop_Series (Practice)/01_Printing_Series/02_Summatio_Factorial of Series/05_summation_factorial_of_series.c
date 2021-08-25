/*
    05. Summation/Factorial of Series Square Even Number
        2^3 + 4^3 + 6^3 + 8^3 +.... + N^3
*/
#include<stdio.h>
int main()
{
    int n,i,sum=0,serise;
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        if(i%2==0){
         serise = i*i*i;
         sum = sum+serise;
          }
    }
      printf("%d\n",sum);

    return 0;
}




