#include<stdio.h>
int main()
{
    float f;
    scanf("%f",&f);
    int integer_part=(int)f;
    int decimal_part=((int)(f*1000)%1000);
    printf("%d\n%d",integer_part,decimal_part);
    return 0;
}