#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the angles of a triangle:");
    scanf("%d\n%d\n%d",&a,&b,&c);
    if(a+b+c==180)
    printf("This is a trianle.");
    else
    printf("This is not trianle.");
    return 0;
}