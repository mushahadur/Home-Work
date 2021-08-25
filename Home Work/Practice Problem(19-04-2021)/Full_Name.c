#include<stdio.h>
int main()
{
    char a[111],b[111];
    scanf("%[^\n]s",&a);
    printf("%s\n",a);
    scanf("%*c");
    scanf("%[^\n]s",&b);
    printf("%s\n",b);

    return 0;
}
