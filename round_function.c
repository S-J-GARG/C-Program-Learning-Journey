#include<stdio.h>
int main()
{
    float a,b,c;
    int f,d;
    printf("Enter the one decimal number:\n");
    scanf("%f",&a);
    d=(int)(a);
    f= ((int)(a*10)%10);
    if(f>=5)
    {
        b=d+1.0;
        printf("The round figure number is:%f\n",b);
    }else{if(f<5)
    c=d;
    printf("the round figure of this number is:%f\n",c);
    }return 0;
}

