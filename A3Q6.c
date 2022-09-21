///Write a program to print greater between two numbers. Print one number of both are the same.
#include<stdio.h>
#include<conio.h>
int main()
{
     int x,y;

    printf("ENTER ANY TWO NUMBERS");
    scanf("%d%d",&x,&y);

    if(x>=y)
    {
        if(x>y)
        {
            printf("\nGREATEST NUMBER IS %d",x);
        }
      else
            {
                printf("\n Both are same %d",x);
            }
    }
    else
    {

        printf("\nGREATEST NUMBER IS %d",y);
    }
    getch();
}
