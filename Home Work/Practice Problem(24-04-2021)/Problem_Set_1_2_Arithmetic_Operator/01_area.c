/*
   01.Find the Area of Triangle using Base and Height.
*/
#include<stdio.h>
int main()
{
    int base, height;
    float area;
    scanf("%d%d",&base,&height);
    area = (base * height)*.5;
    printf("Area of Triangle : %.2f\n",area);

    return 0;
}
