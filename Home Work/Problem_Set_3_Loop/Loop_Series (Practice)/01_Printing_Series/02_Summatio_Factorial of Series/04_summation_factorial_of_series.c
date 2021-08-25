/*
    04. Summation/Factorial of Series Square Odd Number
        1^2 + 3^2 + 5^2 + 7^2 + .... + (101)^2
*/
#include<stdio.h>
int main()
{
    int i,sum=0,serise;

    for(i=1; i<=101; i++)
    {
        if(i%2!=0){
         serise = i*i;
         sum = sum+serise;
          }
    }
      printf("%d\n",sum);

    return 0;
}



