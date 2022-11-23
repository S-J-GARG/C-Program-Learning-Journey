#include<stdio.h>
int main()
{
    int a,b,c,i,j,k;
    printf("The all combination of 1,2,3 are as:\n");
    for(i=1;i<=3;i++)
    {
        for(j=1;j<=3;j++)
        {
            for(k=1;k<=3;k++)
            printf("%d%d%d\n",i,j,k);
        }
    }return 0;

}