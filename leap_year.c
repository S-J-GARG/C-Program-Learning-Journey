#include<stdio.h>
int main()
{
    int year;
    printf("Enter the year:\n");
    scanf("%d",&year);
    if(year%4==0)
    {printf("This is leap year.\n");}
    else{printf("This is normal year.\n");}
    return 0;

}