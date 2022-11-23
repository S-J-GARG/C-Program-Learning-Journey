#include<stdio.h>
#include<math.h>
int main()
{
    float sum,a,log,x,n;
    printf("Enter the value of x to calculate the logarithm:\n");
    scanf("%f",&x);
    for(n=2;n<=100000;n++)
    {  a=(x-1)/x;
       sum+= (1.0/2.0)*(pow((x-1/x),n));
       break;
    } log =a+sum;
    printf("%f",log);
    return 0;
} 