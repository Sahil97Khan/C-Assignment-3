///Write a program to check whether a given character is an alphabet (uppercase), an alphabet (lower case), a digit or a special character.

#include<stdio.h>
#include<conio.h>

int main()
{
    int x;
    printf("ENTER ANY");
    scanf("%d",&x);

    if(x>=32 && x<=64)
    {
        if(x>=32 && x<=58)
        printf("\nIT IS AN SPECIAL CHARACTER");

        else
        {
            printf("\nIT IS AN DIGIT");

        }
    }
    else
    {
        if(x>=65 && x<=90)
        {
            printf("\nIT IS AN UPPER CASE ALPHABET");
        }
        else
            printf("\nIT IS AN LOWER CASE ALPHABET");

    }

}
