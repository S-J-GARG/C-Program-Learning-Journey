#include<stdio.h>
int main()
{
    int num ,r1,r2,q1,q2;
    printf("Enter the number.\n");
    scanf("%d",&num);
    do
    {
        q1=num/8;
        r1=num%8;
        num=q1;
     printf("%d%d",q1,r1);
    } while (num/8!=0);
 return 0;   
}