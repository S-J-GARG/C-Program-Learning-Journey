#include<stdio.h>
#include<math.h>
int main()
{
   int x1,y1,x2,y2,r1,r2;
   printf("Enter the point (x1,y1) of center of the circle:\n");
   scanf("%d%d",&x1,&y1);
   r1= sqrt(pow(x1,2)+pow(y1,2));
   printf("The radius of circle having center (x1,y1):%d\n",r1);
   
   printf("Enter the point(x2,y2) in X_Y plane;\n");
   scanf("%d%d",&x2,&y2);
   r2 = sqrt(pow((x2-x1),2)+ pow((y2-y1),2));
   printf("The distance between point(x2,y2) from point(x1,y1):%d\n",r2);
   if(r2==r1)
   {
    printf("The given point (x2,y2) lies on the cirle.\n");
   }else{
    if(r2<r1)
    {printf("The point (x2,y2) lies in the circle.\n");}
    else{
        if(r2>r1)
        {printf("The point(x2,y2) lies out side the cirle.\n");}
    }
   }
return 0; 
}