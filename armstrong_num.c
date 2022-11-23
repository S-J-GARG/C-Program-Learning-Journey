//write a program to print out all armstong number between 1 to 500.
//if the sum of cubes of each digit of number is equal to number itself, then it is called as armstrong number.
#include<stdio.h>
#include<math.h>
int main()
{
    int amn,sum,n;
    for(amn=1;amn<=500;amn++)
    {
        n=amn;
    if(n<=9)
    {printf("The armstrong number is:%d\n",n);}
    else{
        sum=pow((n%10),3)+pow((n/10)%10,3)+pow((n/100),3);
        if(sum==amn){printf("The armstrong number is:%d\n",amn);}
        }
    }
    return 0;
    
} 