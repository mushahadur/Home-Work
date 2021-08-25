/*
    08. Average of N Number
*/
#include<stdio.h>
int main()
{
    int n,i,sum=0;
    float ave;
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        sum = sum+i;
    }
    printf("%d\n",sum);
    ave = sum/n;
    printf("%.2f\n",ave);
    printf("%d\n",n);

    return 0;
}

