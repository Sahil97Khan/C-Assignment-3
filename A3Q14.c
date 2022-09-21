///Write a program to check whether a given number is divisible by 7 or divisible by 3.
#include<stdio.h>
#include<conio.h>

int main()
{
    int x;
    printf("ENTER ANY NUMBER");
    scanf("%d",&x);

  if(x%21==0)
  {
      printf("%d is Divisible by 3 AND 7",x);
  }
  else
    printf("%d is NOT Divisible by 3 AND 7",x);
    getch();
}
