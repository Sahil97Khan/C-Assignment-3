#include<stdio.h>
#include<conio.h>


int main()
{
int a,b,c ;
printf("Enter Any Three Numbers");
scanf("%d%d%d",&a,&b,&c);
printf("The Entered Numbers are %d, %d and %d.",a,b,c);
if(a>b)
{
    printf(" Here %d is Greater than %d.",a,b);
    if(a>c)
    {
        printf("%d is Greater Number.",a);
    }
    else
    {
       printf("%d is Greater Number.",c);
    }
}
else
{
    printf(" Here %d is Greater than %d.",b,a);
    if(b>c)
    {
        printf("%d is greater Number",b);
    }
    else
    {
        printf("%d is greater number Among All",c);
    }
}
getch();
}
