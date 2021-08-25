/*
   03.Find Grade of Exam
*/
#include<stdio.h>
int main()
{
    int mark;
    scanf("%d",&mark);
    if(mark < 100 && mark > 80)
    {
        printf("A+	 Excellent !\n");
    }
    else if(mark > 75 && mark < 79)
    {
        printf("A	 Excellent !\n");
    }
    else if(mark > 70 && mark < 74)
    {
        printf("A-	 Excellent !\n");
    }
    else if(mark > 65 && mark < 69)
    {
        printf("B+	 Good !\n");
    }
    else if(mark > 60 && mark < 64)
    {
        printf("B	 Good !\n");
    }
    else if(mark > 55 && mark < 59)
    {
        printf("B-	 Good !\n");
    }
    else if(mark > 50 && mark < 54)
    {
        printf("C+	 Average !\n");
    }
    else if(mark > 45 && mark < 49)
    {
        printf("C	 Average !\n");
    }
    else if(mark > 40 && mark < 44)
    {
        printf("D	 Poor !\n");
    }

    else
    {
        printf("Fail !!\n");
    }


    return 0;
}

/*
  A+	 Excellent	80 to 100%	   4.00 points

  A	 Excellent	75 to 79%	   3.75 points

  A-	 Excellent	70 to 74%	   3.50 points

  B+	 Good	65 to 69%	   3.25 points

  B	 Good	60 to 64%	   3.00 points

  B-	 Good	55 to 59%	   2.75 points

  C+	 Average	50 to 54%	   2.50 points

  C	 Average	45 to 49%	   2.25 points

  D	 Poor	40 to 44%	   2.00 points

  F	 Failing	0 to 39%	   0.00 points

*/
