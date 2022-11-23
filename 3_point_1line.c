#include<stdio.h>
int main()
{
    float x1,y1,x2,y2,x3,y3;
    printf("Enter a point (x1,y1) in X-Y plane:\n");
    scanf("%f%f",&x1,&y1);
    printf("Enter a point (x2,y2) in X-Y plane:\n");
    scanf("%f%f",&x2,&y2);
    printf("Enter a point (x3,y3) in X_Y plane:\n");
    scanf("%f%f",&x3,&y3);
    if((x3-x2)*(y2-y1)-(x2-x1)*(y3-y2)==0)
    {
        printf("All three points fall on one straight line.\n");
    }
        else {
            printf("All given point can make a triangle.");

        }
        return 0;
}