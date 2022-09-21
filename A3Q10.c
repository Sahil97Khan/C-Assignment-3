#include<stdio.h>
#include<conio.h>

int main()
{
    int x,y,z;
    //x and y are cost price and sell price
    printf("Enter cost price and sell price:-");
    scanf("%d%d",&x,&y);

    if(x<y)
    {
        printf("\n IT IS PROFIT");
        z=((y-x)*100)/y;
        printf("\n PROFIT PERCENTAGE IS %d",z);
    }
    else
    {
         printf("\n IT IS LOSS");
         z=((x-y)*100)/x;
         printf("\n LOSS PERCENTAGE IS %d",z);
    }
}
