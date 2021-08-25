#include<stdio.h>
int main()
{
    int n,i,j,m;
    int arr[50];
    scanf("%d",&n);
    while(n--)
    {
       scanf("%d",&m);
       for(i=0; i<m; i++)
       {
           scanf("%d",&arr[i]);
       }

       for(j=0; j<m; j++)
       {
           printf("%d\n",arr[j]);
       }
    }

    return 0;
}
