///Write a program to take marks of 5 subjects from the user. Assume marks are given out of 100 and passing marks is 33. Now display whether the candidate passed the examination or failed.
#include<stdio.h>
#include<conio.h>

int main()
{
    int a,b,c,x,y,p;
    printf("\nEnter marks of Student in all five Subjects in order EHPCB:-");
    scanf("%d%d%d%d%d",&a,&b,&c,&x,&y);
    printf("\n Marks of Students in Given subjects are out of 100");
    printf("\n Marks in English = %d/100",a);
    printf("\n Marks in Hindi = %d/100",b);
    printf("\n Marks in Physics = %d/100",c);
    printf("\n Marks in Chemistry = %d/100",x);
    printf("\n Marks in Biology = %d/100",y);
    printf("\n TOTAL MARKS OBTAINED = %d",a+b+c+x+y);
    printf("\n TOTAL MARKS = 500");
    printf("\n :: Minimum Marks for Qualify the Exam out of 500 is 155");
    p=a+b+c+x+y;
    if(p>=155)
    {
        printf("\n Result = PASS"
               "\n Percentage = %d%% ",p/5);
    }
    else

    {
        printf("\n Result = FAILED"
               "\n Percentage = %d%%",p/5);
    }

   getch();
}
