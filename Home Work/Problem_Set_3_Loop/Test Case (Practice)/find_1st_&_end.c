#include<stdio.h>
int main()
{
    int n,i,l;
    printf("Enter the number :");
    scanf("%d",&n);
    l = n%10;
    for(i=0; (n/10)!=0; i++){
        n=n/10;
    }
    printf("%d\n%d\n",n,l);

    return 0;
}
