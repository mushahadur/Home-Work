/*
   05.Convert Temperature Fahrenheit to Celsius.
*/
#include<stdio.h>
int main()
{
    float celsius,fahrenheit;
    scanf("%f",&fahrenheit);
    celsius = ((fahrenheit-32)/9)*5;
    printf("Temperature Celsius to Fahrenheit : %.2f\n",celsius);

    return 0;
}
