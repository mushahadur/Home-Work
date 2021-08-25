/*
   03.Find the Area of Circle using Radius.
*/
#include<stdio.h>
int main()
{
    float area,radius, pi = 3.14159;
    scanf("%d",&radius);
    area = pi*radius*radius;
    printf("The Area of Circle : %.2f\n",area);

    return 0;
}
