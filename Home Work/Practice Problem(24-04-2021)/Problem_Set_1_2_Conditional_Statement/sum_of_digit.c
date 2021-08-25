/// Sum of digit ..

#include<stdio.h>
int main()
{
    int num,temp,res,sum=0;
    scanf("%d",&num);
    temp = num;
    while(temp!=0)
    {

        res = temp % 10;
        sum = sum+res;
        temp = temp/10;

    }
    printf("Sum of digit : %d\n",sum);

    return 0;
}
