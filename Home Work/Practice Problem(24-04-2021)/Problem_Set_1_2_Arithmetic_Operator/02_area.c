/*
   02.Find the Area of a Triangle using the length of 3 sides.
*/
#include<stdio.h>
int main()
{
    int length1, length2,length3,area;
    scanf("%d%d%d",&length1,&length2,&length3);
    area = length1 + length2 + length3;
    printf("Summation of Number : %d\n",area);

    return 0;
}

