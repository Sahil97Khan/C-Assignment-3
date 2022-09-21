///Write a program to check whether a given number is divisible by 3 and divisible by 2.
#include<stdio.h>
#include<conio.h>

int main()
{
    int x;
    printf("ENTER ANY NUMBER");
    scanf("%d",&x);

    if(x%6==0)
    {
        printf("\n%d is Divisible by 2 and 3",x);
    }
    else
        printf("\n%d is NOT Divisible by 2 and 3",x);
}
