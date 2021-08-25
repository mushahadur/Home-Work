#include<stdio.h>
int main()
{
    char a,b;

    scanf("%c",&a);
    scanf("%*c");
    printf("%c\n",a);
    scanf("%c",&b);
    printf("%c",b);

    return 0;
}
