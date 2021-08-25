#include<stdio.h>
int main()
{
    int n,i,j;
    int arr[50];
    while(scanf("%d",&n),!(n==0))
    {
       printf("%d\n",n);
       for(i=0; i<n; i++)
       {
           scanf("%d",&arr[i]);
       }

       for(j=0; j<n; j++)
       {
           printf("Case : %d %d\n",j,arr[j]);
       }
    }

    return 0;
}

