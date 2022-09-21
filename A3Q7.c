///Write a program to check whether roots of a given quadratic equation are real & distinct, real & equal or imaginary roots
#include<stdio.h>
#include<conio.h>

int main()
{
    int x,y;

    printf("ENTER ANY TWO NUMBERS");
    scanf("%d%d",&x,&y);

     int a = x+y;
     int b = x*y;

     int D =a*a-4*b;

     if(D>=0)
     {
         if(D>0)
         {
             printf("\nREAL DISTINCT ROOTS");
         }
         else
             printf("\nREAL EQUAL ROOTS");
     }
     else
     {
         printf("\nIMAGINARY ROOTS");
     }
     getch();
}
