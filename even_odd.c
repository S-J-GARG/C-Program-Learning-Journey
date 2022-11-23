#include<stdio.h>
int main()
{
    int num,even,odd;
    printf("Enter the any intger number:\n");
    scanf("%d",&num);
    if(num%2==0)
    printf("The number is even.\n");
    else{ printf("The given number is odd.\n");}
if(num==0)
printf("The number is nither even nor odd. ");
return 0;
}