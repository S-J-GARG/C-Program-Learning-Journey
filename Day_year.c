#include<stdio.h>
int main()
{
    int year;
    printf("Enter the year :\n");
    scanf("%d",&year);
    if(year%7==1)
    {printf("The 1st january of this year is monday.\n");}
    else {if(year%7==2)
    {printf("The 1st january of this year is tuesday.\n ");}
    else {if(year%7==3)
    {printf("The 1st january of this year is wednesday.");}
    else{
    if(year%7==4)
    {printf("The 1st january of this year is thursday.\n");}
    else {if(year%7==5)
    {printf("The 1st january of this year is friday.");}
    else {if(year%7==6)
    {printf("The 1st january of this year is satuarday,");}
    else{if(year%7==0)
    {printf("The 1st january of this year is sunday.");}}}}}}}
    return 0;
    }
