#include<stdio.h>
int main()
{
 float num ,abs_num;
 printf("Enter the any number:\n");
 scanf("%f",&num);
 if(num<0)
 {abs_num = (num)*(-1);
 printf("The absolute value of given number is:%f\n",abs_num);
 }
 else 
 {abs_num = num;
 printf("The absolute value number is :%f\n",abs_num);}
 return 0;
 
}