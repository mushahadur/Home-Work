#include<stdio.h>
int main()
{
  int n, m;
  while(scanf("%d %d",&n,&m),!((n==-1) && (m==-1)))
  {
    printf("%d  %d\n",n,m);
  }

    return 0;
}


