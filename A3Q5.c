///Write a program to check whether a given number is a three-digit number or not.
#include<stdio.h>
#include<conio.h>

int main()
{
    int x;
    int i,n=0;

    printf("ENTER ANY NUMBER");
    scanf("%d",&x);
    for(i=0;x!=0;i++)
    {
        x=x/10;
        n++;
    }
    ///printf("\n%d",n);
    if(n==3)
    {
        printf("\nIT'S 3 DIGIT NUMBER");
    }
    else
        printf("\nIT'S NOT 3 DIGIT NUMBER");
}
