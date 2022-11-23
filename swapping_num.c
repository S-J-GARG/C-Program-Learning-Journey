#include<stdio.h>
int main()
{
  int c,d;
    printf("Enter the value of c:\n");
    scanf("%d",&c);
    printf("The entered value of c is:(%d)\n",c);
    printf("Enter the value of d:\n");
    scanf("%d",&d);
    printf("The entered value of d is:(%d)\n",d);
    c=c+d;
    d=c-d;
    c=c-d;
     printf("the interchnge location for c is:%d\n",c);
    printf("the interchange location for d is:%d\n",d);
    return 0;
    
  }