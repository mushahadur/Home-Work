#include<stdio.h>
int main()
{
    int i=0, t = 10;
    int n;
    freopen("out1.txt", "w", stdout);
    while(scanf("%d",&n)!=EOF){
        if(i>0){
            printf("\n");
        }
        printf("Case %d: %d", i++, n);
        //i++;
    }

    /*
    for(i=0;i<t;i++){
        if(i>0){
            printf("\n");
        }
        printf("%d",i);
    }
    */
    return 0;
}
