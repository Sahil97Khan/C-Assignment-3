///Write a program to check whether a given number is an even number or an odd.
//number.
#include<stdio.h>
#include<conio.h>

int main()
{
     int x;
    printf("ENTER ANY NUMBER:-");
    scanf("%d",&x);
     int z=x%2;

    if(z==0)
    {
        printf("EVEN");
    }
    else
        printf("ODD");
}

