#include<stdio.h>
int main()
{
   //char c,p,m1='1',m2='2',m3='3',m4='4',m5='5',m6='6',m7='7',m8='8',m9='9',m10='10',m11='11',m12='12'
    //,m13='13',m14='14',m15='15',m16='16',m='17',m18='18',m19='19',m20='20',m21='21';
    int m=21,p,c;
    
   // for(scanf("%c",&m1)||scanf("%c",&m2)||scanf("%c",&m3)||scanf("%c",&m4);){
    //for(;m!=1;)
    while(1)
    {
        printf("There are %d number of  matchsticks left.\n ",m);
        printf("Pick the 1,2,3,or 4 matchsticks:\n");
        scanf("%d",&p);
        
        if(p>=1||p<=4)
    
        
           // printf("Now computer has pick %d numbers of matchsticks:.\n",c);
            m=m-p;
            printf("Number of matches left=%d\n",m);
        //printf("Now its your move to picks up matchsticks from left %d matchsticks.\n",a);
       // scanf("%d",&p);
       c=5-p;
        printf("Now out of which computer has picks %d numbers of matches.\n",c);
        m=m-c;
if(m==1){ printf("\n number of matches left =%d\n",m);
          printf("you have lost the game.\n");
    break;

        }
        //else {printf("please pick up 1 or 2 or 3 or 4 matchsticks.\n");}
    }
     return 0;
}   
