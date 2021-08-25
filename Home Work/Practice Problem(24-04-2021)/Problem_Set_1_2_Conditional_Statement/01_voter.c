/*
   01.Find Voter or Not Voter.
*/
#include<stdio.h>
int main()
{
    int age;
    printf("Please Enter the Age :\n");
    scanf("%d",&age);
    if(age > 18)
    {
        printf("You are Voter !\n");
    }
    else
    {
        printf("You are not voter !\n");

    }

        return 0;
}
