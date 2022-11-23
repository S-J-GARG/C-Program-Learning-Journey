#include<stdio.h>
#include<math.h>
int main()
{
    float rad,dgre;
    printf("Enter the angle in radian:\n");
    scanf("%f",&rad);
    dgre =(180.0/3.1415926536)*rad;
    (pow(sin(dgre),2)+pow(cos(dgre),2)==1?
    printf("Th given equation is valid and the converted radian value in degree is:%f",dgre):
    printf("Th given equation is invalid and But the converted radian value in degree is:%f",dgre));
return 0;
}