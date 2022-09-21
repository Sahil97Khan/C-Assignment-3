///Write a program to check whether a given number is divisible by 5 or not
#include<stdio.h>
#include<conio.h>

int main()
{
     int x;
    printf("ENTER ANY NUMBER:-");
    scanf("%d",&x);
     int z=x%5;

    if(z==0)
    {
        printf("DIVISIBLE BY 5");
    }
    else
        printf("NOT DIVISIBLE BY 5");
}
