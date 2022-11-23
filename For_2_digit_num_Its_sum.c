#include<stdio.h>
int main()
{
    int a ,b;
     printf("Enter the 2 digit integer number:\n");
scanf("%d",&a);
b =(a+(9*(a%10)))/10;
    printf("the sum of its digit is:%d\n",b);
    
    return 0;
}