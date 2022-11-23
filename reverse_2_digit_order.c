#include<stdio.h>
int main()
{
    int num,rev_num;
    printf("Enter the 2 digit number:\n");
    scanf("%d",&num);
    rev_num = (num%10)*10 + num/10;
    printf("The reverse order of 2 digit number is:%d\n",rev_num);
    return 0;
    
}