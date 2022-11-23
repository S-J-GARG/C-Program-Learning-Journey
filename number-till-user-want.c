#include<stdio.h>
int main()
{
    int num;
    char another='y';
    while(another=='y'){
        printf("Enter the number:\n");
        scanf("%d",&num);
        if(num>0){printf("\n%d is positve number.\n",num);}
        else{
        if(num==0){printf("This is zero number.\n");}
        else{
        if(num<0){printf(" \n%d is negative number\n",num);}}}
        printf("Do you want to enter another number? say Yes'Y'or No'N' if not:\n");
        fflush(stdin);
        scanf("%c",&another);
    } return 0;
}
