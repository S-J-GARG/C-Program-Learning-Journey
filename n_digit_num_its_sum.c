#include<stdio.h>
int main()
{
    int x,y=0;
    printf("Enter 4 digit number:\n");
    scanf("%d",&x);
while( x !=0){
    y +=x%10;
    x=x/10;
}
   /* y = x/1000 + (x%1000)/100+ (((x%1000)%100)+9*(((x%1000)%100))%10)/10; This is worng
   */

    printf("The sum of its digits is:%d\n",y);
    return 0;


}