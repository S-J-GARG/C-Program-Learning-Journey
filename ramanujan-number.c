#include<stdio.h>
#include<math.h>
int main()
{ 
    int a1,b1,c1,d1,n1,e;
    char ano='y';
    printf("The list of all ramanujan number upto:\n");
    scanf("%d",&e);
    for(n1=1;n1<=e;n1++)
    {
        for(a1=1;a1<=e;a1++)
        {
            for(b1=1;b1<=e;b1++)
            {
                for(c1=1;c1<=e;c1++)
                {
                    for(d1=1;d1<=e;d1++)
                    {if(d1==(pow(a1,3)+pow(b1,3))&&d1==(pow(c1,3)+pow(n1,3)))

                    { 
                        printf("Ramanujan number is:%d\n ",d1);
                    printf("Since the sum of two different cubes in two diffenent ways is equal to ramanujan number%d;\n",d1);
                     printf("such that %d=(%d)^3+(%d)^3 And %d=(%d)^3+(%d)^3\n",d1,a1,b1,d1,c1,n1);}}
                }
            }
        } //todo 😛here in this program our complier doesn't check ramanujan number for two diffenent way
        //? so i want a function who can restrict by doing this.. 
         
    }return 0;
}