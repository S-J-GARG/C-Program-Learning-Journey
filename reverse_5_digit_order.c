#include<stdio.h>
int main()
{
    int num,rev_num;
    printf("Enter the 5 digit number:\n");
    scanf("%d",&num);
    rev_num =(num%10)*10000 + ((num%100)/10)*1000 +((num%1000)/100)*100 + ((num%10000)/1000)*10 +num/10000;
    printf("The reverse order of 5 digit number is:%d\n",rev_num);
    return 0;
    
}