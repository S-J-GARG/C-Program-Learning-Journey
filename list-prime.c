#include<stdio.h>
int main()
{
    int prime,num,i;
    char another='y';
  while(another=='y')
    {
 printf("I want to list prime number from 1 to(....)say number.\n"); 
 scanf("%d",&num);  
for(prime=1;prime<=num;prime++)
{ for(i=2;i<=prime;i++)
   {
    if(prime%i==0)
     break;
   }
   if(i==prime)
   printf("%d is prime number between 1 to %d.\n",prime,num);}
   printf("Do you want to change the range set of prime numbers.\n Type yes as'y'.\n");
   fflush(stdin);
   scanf("%c",&another);}
return 0;
}