#include<stdio.h>
int main()
{
    int t,a,b,c,i=1;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d%d",&a,&b,&c);
        if(((a<b) && (b<c)) || ((a>b) && (b>c)))
        {
            printf("Case %d: %d\n",i,b);
        }
        else if(((c<b) && (c<a))|| ((c>a) && (c>b)))
        {
            printf("Case %d: %d\n",i,a);
        }
        else
        {
            printf("Case %d: %d\n",i,c);
        }
        i++;
    }

    return 0;
}
