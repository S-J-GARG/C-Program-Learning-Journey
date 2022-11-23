#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,d;
    printf("The pythgrous triplet of a triangle side is less than or equal to:\n");
    scanf("%d",&d);
    for(a=1;a<=d;a++)
    {
      for(b=1;b<=d;b++)
      {
        for(c=1;c<=d;c++)
        {
            
            
            if(a==sqrt(pow(b,2)+pow(c,2))) 
           
    printf("a=%d,b=%d,c=%d\n",a,b,c);
         //b=sqrt(pow(a,2)+pow(c,2));
        }
      }
    }//if(a==c&&c==b)
    return 0;
}
