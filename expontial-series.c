#include<stdio.h>
int main()
{   
    float a,n,i,j,num,fact;
    char another='y';
    //π
    //π
    //π
    while(another=='y')
   { printf("Enter the number upto you want sum:\n");
    scanf("%f",&num);
    
        //No help from any one πππ
        //π€for(j=1;j<=num ;j++)π
        fact=i=1;
        while(i<=num)
        {
        fact =(fact*i);
        j+=i/fact; //π using += compound assignment we meant that π₯° j wil add to j of next j value.
        i++;}
        printf("%f\n",fact);
       
        printf("The sum of first %f number is %f. \n",num,j);
    printf("Do you want enter for other series? type 'y'. \n");
    fflush(stdin);
    scanf("%c",&another);
    
   }
     return 0;
}