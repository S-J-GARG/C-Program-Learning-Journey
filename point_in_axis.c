#include<stdio.h>
int main()
{
    int x1,y1;
    printf("Enter a point (x1,y1) in X_Y plane:\n");
    scanf("%d%d",&x1,&y1);
    if(x1==0&&y1!=0)/*Mistake__if(x1==0)*/
    {
        printf("the point lies in Y-axis.");
    } 
    else
    {
        if(y1==0&&x1!=0)/*mistake__if(y1==0)*/
        
        {printf("The point lies in X-axis.");}
    else
        {
            if(y1==0&&x1==0)
        
        {printf("The point lies at origin.");}
        else 
        {printf("The point lies in X-Y plane.");}
        }
    
        }
        return 0;
    }
