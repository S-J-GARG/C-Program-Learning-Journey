#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the length of sides of a triangle.\n");
    scanf("%d%d%d",&a,&b,&c);
   /*if(((a>=b)&&((b>=c)||(b<=c))&&(b+c>=a))||((b>=a)&&((a>=c)||(a<=c))&&(a+c>=b))||((c>=a)&&((a>=b)||(a<=b))&&(b+a>=c)))
   --this will show every sides to as a triangle side */
    if((a+b>c)&&(b+c>a)&&(b+c>a))
    {printf("It is a trianlge.\n");}
    else {printf("It is not a triangle.");}
    return 0;
    
}