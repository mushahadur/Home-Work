#include<stdio.h>
int main()
{
    char a[33];
    int b;
    float c;

    scanf("%[^\n]s",&a);
    scanf("%d%f",&b,&c);
    printf("Hello,%s\n",a);
    printf("Your age is %d\n",b);
    printf("Your CGPA is %2.f\n",c);


    return 0;
}
