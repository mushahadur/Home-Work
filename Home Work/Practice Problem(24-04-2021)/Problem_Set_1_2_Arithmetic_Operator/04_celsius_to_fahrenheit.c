/*
   04.Convert Temperature Celsius to Fahrenheit.
*/
#include<stdio.h>
int main()
{
    float celsius,fahrenheit;
    scanf("%f",&celsius);
    fahrenheit = ((celsius/5)*9)+32;
    printf("Temperature Celsius to Fahrenheit : %.2f\n",fahrenheit);

    return 0;
}
