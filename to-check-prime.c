#include<stdio.h>
int main()
{
    int num,prime;
    char another='y';
   while(another=='y') 
    {printf("Enter the number to validate !! Is it prime ?\n");
    scanf("%d",&prime);

    for(num=2;num<=prime;num++)
    {
        if(prime%num==0)
        break;
    }if(prime==num)
    {printf(" %d is prime number.\n",prime);}
    else{printf(" %d is not prime number,\n",prime);}
    printf("Do you want check another prime number ? type 'y'. \n");
    fflush(stdin);
    scanf("%c",&another);}
    return 0;
}