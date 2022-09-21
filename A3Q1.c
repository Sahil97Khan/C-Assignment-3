///Write a program to check whether a given number is positive or non-positive.
#include<stdio.h>
#include<conio.h>

int main()
{
    int x;
    printf("ENTER ANY NUMBER:-");
    scanf("%d",&x);

    if(x>=0)
    {
        printf("POSITIVE NUMBER");
    }
    else
        printf("NEGATIVE NUMBER");
}
