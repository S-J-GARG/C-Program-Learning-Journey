#include<stdio.h>
#include<math.h>
int main()
{
    float x,y,radius,angle;
    
    printf("Enter the cartesian co-ordinate(x,y):\n");
    scanf("(%f,%f)",(&x,&y));
    radius =sqrt(x*x + y*y);
    angle = atan(y/x);
    printf("The polar co-ordinate of (x,y) is:(%f,%f)",radius,angle);
    return 0;

}