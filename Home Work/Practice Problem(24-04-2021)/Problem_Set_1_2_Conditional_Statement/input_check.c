/*
    Write Program to check whether a character is an Alphabet Digit Special Character.
*/
#include<stdio.h>
int main()
{
    char c;
    scanf("%c",&c);
    if((c>=65 && c<=90) || (c>=97 && c<=122))
    {
        printf("This is an Alphabet\n");
    }
    else if(c>='0' && c<='9')
    {
       printf("This is a Digit\n");
    }
    else{
       printf("This is a Special Character\n");
    }

    return 0;
}
