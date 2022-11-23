#include<stdio.h>
int main()
{
    int ram, shyam, ajay;
    printf("Enter the age of Ram:\n");
    scanf("%d",&ram);
    printf("Enter the age of Shyam:\n");
    scanf("%d",&shyam);
    printf("Enter the age of Ajay:\n");
    scanf("%d",&ajay);
    /*if(ram<shyam<ajay)*/
    if(ram<=shyam&&shyam<=ajay)
   { printf("Ram is youngest.\n");}
    else
    /*if(shyam<ajay<ram)*/
    {
        if(shyam<=ajay&&ajay<=ram)
    {printf("Shyam is youngest.");}

    else {printf("Ajay is youngest.");}}
    return 0;
}