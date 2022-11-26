#include<stdio.h>
void ram();
void add();
void mod();
int calmul(int x,int y,int z);
int main ()
{ ram();
    add();
    printf("\nI am the best if God Ram with me\n");
    mod();

    return 0;

}
void ram()
{ 
    printf("Thank God !!\n");

}
void add()
{   
    int a,b,c,d,f;
    printf("enter number a and b\n");
    scanf("%d%d%d",&a,&b,&c);
    d= a+b;
    f =calmul(a,b,c);
    printf("sum = %d\nand multipiction=%d",d,f);

}
void mod()
{
    int a,b,c;
     printf("Enter number a,b\n");
     scanf("%d%d",&a,&b);
    c=a%b;
    printf(" reminder=%d",c);
}
int calmul(int x,int y,int z)
{
    int g;
    g= x*y*z;
    return(g);
}