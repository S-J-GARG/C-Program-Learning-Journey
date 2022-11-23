#include<stdio.h>
int main()
{
    float m1,m2,m3;
    int n1,n2,n3;
    printf("Enter the number.\n");
    scanf("%f",&m1);
    n1=(int)m1;
    n2=((int)(m1*10000000)%10000000);
    printf("%d\n%d\n",n1,n2);
    n3=n2/1000000;
    if(n3>=5)
    { m2=n1+1.0;
    printf("The Round figure number is:%f\n",m2);
    }else {if(n3<5)
    m3=n1;
    printf("The round figure number is:%f\n",m3);}
    return 0;

    
}