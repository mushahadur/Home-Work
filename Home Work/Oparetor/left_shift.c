/// Left Shift Operator (<<)

#include<stdio.h>
int main()
{
   int num=9, i;
   for (i=0; i<=3; ++i)
   {
      printf("Left shift by %d bits: %d\n", i, num << i);
   }


   int x=20, y=-20;
   printf("\n%d %d\n", x<<1, y<<1);
   printf("%d %d\n", x<<2, y<<2);
   printf("%d %d\n", x<<3, y<<3);
   printf("%d %d\n", x<<4, y<<4);
   printf("%d %d\n", x<<5, y<<5);
   printf("%d %d\n", x<<6, y<<6);
   printf("%d %d\n", x<<7, y<<7);


   return 0;
}
