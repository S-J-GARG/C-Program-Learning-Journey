#include<stdio.h>
int main()
{
    int year;
    printf("Enter the year:\n");
    scanf("%d",&year);
    (year%4==0?
    printf("This is leap year.\n"):
    printf("This is normal year.\n"));
    return 0;

}