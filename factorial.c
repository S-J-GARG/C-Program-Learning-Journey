#include<stdio.h>
int main()
{//To calutae factorial of any number.
    int n,i,f;
    f=i=1;
    printf("Enter the number:\n");
    scanf("%d",&n);
while(i<=n)
    {
        f=f*i;
        i++;    
    }
        printf("The factorial for this number is:%d\n",f);
    

    return 0;
}
