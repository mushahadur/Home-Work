#include<stdio.h>
int main()
{
    int a;
    printf("For integer to take normal number\nFor octal first take '0' then number\nFor hexa first take '0x' then number\n\n");
    scanf("%i",&a);
    printf("\ninteger Number     : %i\n",a);
    printf("decimal Number     : %d\n",a);
    printf("Hexadecimal Number : %X\n",a);
    printf("Hexadecimal Number : %x\n",a);
    printf("Octal Number       : %o\n",a);

    return 0;
}
