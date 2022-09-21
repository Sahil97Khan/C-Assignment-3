///15. Write a program to check whether a given number is positive, negative or zero.
#include<stdio.h>
#include<conio.h>

int main()
{
    int x;
    printf("ENTER ANY NUMBER:-");
    scanf("%d",&x);

    if(x>0 || x==0)
    {
        if(x==0)
        {
             printf("ZERO");
        }
        else
        printf("ZERO");
    }
    else
        printf("NEGATIVE NUMBER");
        getch();
}
