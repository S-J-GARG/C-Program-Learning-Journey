#include<stdio.h>
#include<stdlib.h>
int main()
{
    int c;
   
    while(1)
    {

       printf("Press '1' to check whether is odd/ even\n");
        printf("Press '2' to find factorial of .\n");
        printf("Press '3' to check whether is prime or not.\n");
        printf("Press '4' to exit from program.\n");
    
        scanf("%d",&c);
     int num,i,j,k,p,l;    
 //! 🙃🙃🙃🙃Always write scanf for char firstly then write for int value
 //?👍     Means 1stly scanf("%c",&s) then scanf("%d",&d)
//!😑Now there is problem,,, after selecting one time o/p/f/e program runs but it is not asking it for what i want todo
//*i.e it assumes our first assumption for every time
        
     switch(c)
       
        {
            case 1:
            printf("Now Enter the number\n");
        scanf("%d",&num);
            if(num%2==0)
            {printf("%d is even number.\n",num);}
            else{printf("%d is odd number.\n",num);}
            break;
            case 2:
            printf("Now Enter the number\n");
        scanf("%d",&p);
            for(j=i=1;i<=p;i++)
            {
                j=j*i;
            }
                printf("The factorial of %d is %d.\n",p,j);
            
            break;
            case 3:
            printf("Now Enter the number\n");
        scanf("%d",&l);
            for(k=2;k<=l;k++)
            {
                if(l%k==0)
                break;   
            }if(l==k)
            {printf("%d  is prime number.\n",l);}
            else{printf("%d is not prime number\n",l);}
            break;
            case 4:
            exit(1);
            default:
            printf("Enter appropiate value\n");
            break;

        }
        
         //printf("Do you want to check for another number ? type 'n'. \n");
         //fflush(stdin);
         //scanf("%c",&c);
        // fflush(stdin) now don't needed
        
    } 
        
       
     return 0;
}
