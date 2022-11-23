#include<stdio.h>
int main()
{
    int num,rev_num;
    printf("Enter the four digit number is :\n");
    scanf("%d",&num);
    rev_num = (num%10)*1000 +((num%100)/10)*100 +((num/100)%10)*10 +(num)/1000;
    printf("The reverse order of 4 digit number is:%d\n",rev_num);
    return 0;
    
}