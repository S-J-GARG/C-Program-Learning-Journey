#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter the 3 digit integr:\n");
    scanf("%d",&x);
    y= x/100+ ((x%100)+9*((x%100)%10))/10;

    printf("the sum of its digit:%d\n",y);
    return 0;
}