#include<stdio.h>
int main()
{   
    float a,n,i,j,num,fact;
    char another='y';
    //💝
    //💝
    //💝
    while(another=='y')
   { printf("Enter the number upto you want sum:\n");
    scanf("%f",&num);
    
        //No help from any one 😍😍😍
        //🤔for(j=1;j<=num ;j++)💖
        fact=i=1;
        while(i<=num)
        {
        fact =(fact*i);
        j+=i/fact; //😄 using += compound assignment we meant that 🥰 j wil add to j of next j value.
        i++;}
        printf("%f\n",fact);
       
        printf("The sum of first %f number is %f. \n",num,j);
    printf("Do you want enter for other series? type 'y'. \n");
    fflush(stdin);
    scanf("%c",&another);
    
   }
     return 0;
}