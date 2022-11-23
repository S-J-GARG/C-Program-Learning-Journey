#include<stdio.h>
#include<math.h>
int main()
{
   int x,y,r1=50,r2;
   printf("The point origin is center of the circle:\n");   
   printf("The radius of circle having center as origin :%d\n",r1);
   
   printf("Enter the point(x,y) in X_Y plane;\n");
   scanf("%d%d",&x,&y);
   r2 = sqrt(pow(x,2)+ pow(y,2));
   printf("The distance between point(x,y) from the origin:%d\n",r2);
   if(r2==r1)
   {
    printf("The given point (x,y) lies on the cirle.\n");
   }else{
    if(r2<r1)
    {printf("The point (x,y) lies in the circle.\n");}
    else{
        if(r2>r1)
        {printf("The point(x,y) lies out side the cirle.\n");}
    }
   }
return 0; 
}