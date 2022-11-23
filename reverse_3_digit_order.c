#include<stdio.h>
int main()
{
    int num,rev_num;
    printf("Enter the three digit number is:\n ");
    scanf("%d",&num);
    rev_num = (num%10)*100 +((num/10)%10)*10 +num/100;
    printf("The reverse order of 3 digit number is:%d\n",rev_num);
    return 0;
    
}