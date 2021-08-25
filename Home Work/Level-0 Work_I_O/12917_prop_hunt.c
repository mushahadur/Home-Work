#include<stdio.h>
int main()
{
    int a,b,c,d;
    while(scanf("%d%d%d",&a,&b,&c) !=EOF)
    {
        d = a+b;
        if(d<=c)
        {
            printf("Props win!\n");
        }
        else
        {
           printf("Hunters win!\n");
        }
    }

    return 0;
}

