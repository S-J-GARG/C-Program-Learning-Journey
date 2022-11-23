#include<stdio.h>
int main()
{
    int num,a,b,c,d,e,f;
    printf("Enter five digit number:\n");
    scanf("%d",&num);
    a = num/10000;
    b = (num/1000)%10;
    c =(num/100)%10;
    d =(num/10)%10;
    e =num%10;
    f = a+b+c+d+e;
    printf("The sum of its five digit is:%d",f);
    return 0;
    }