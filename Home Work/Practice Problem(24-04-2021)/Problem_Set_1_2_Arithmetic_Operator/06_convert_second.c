/*
   06.Convert Second to HH:MM:SS.
*/
#include<stdio.h>
int main()
{
   /*
   int hour,min,temp,second,con_sec;
   scanf("%d:%d:%d",&hour,&min,&second);
   con_sec = (hour*3600)+(min*60)+second;
   printf("Convert Second : %d\n",con_sec);
   */

   /*
   int hour,min,second,con_sec;
   scanf("%d",&con_sec);
   hour = con_sec/3600;
   min = (con_sec-(hour*3600))/60;
   second = (con_sec -(3600*hour)-(min*60));
   printf("%02d:%02d:%02d\n",hour,min,second);
*/

    int day,hour,min,second,con_sec;
    scanf("%d",&con_sec);
    day = con_sec/86400;
    printf("%d\n",day);
    hour = (con_sec-(day*86400))/3600;
    min = (con_sec-(hour*3600))/60;
    second = (con_sec -(3600*hour)-(min*60));
    printf("%d:%02d:%02d:%02d\n",day,hour,min,second);

    return 0;
}
