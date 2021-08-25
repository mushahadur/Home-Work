#include<stdio.h>
int main()
{
    int n,m;
    while(scanf("%d %d",&n,&m),!((n==0)&&(m==0)))
    {
        printf("%d %d\n",n,m);
    }

    return 0;
}

