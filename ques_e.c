#include<stdio.h>
int main()
{
    float r,g,b;
    float c,m,y,k,w1,w2,w3;
    printf("Enter the Red-Green-Blue colour format from 0 to 255:\n");
    scanf("%f%f%f",&r,&g,&b);
    w1=r/255.0;
    w2=g/255.0;
    w3=b/255.0;
    printf("(%f)\n(%f)\n(%f)\n",w1,w2,w3);
    if((w1>=w2)&&(w2>=w3))
    {
    printf("The CYMK formate white colour value is1:%f\n",w1);
    c=(w1-(r/255.0)/w1);
    printf("The CYMK format Cyan colour value is:%f\n",c);
    m=(w1-(g/255.0))/w1;
    printf("The CYMK formate Magenta colour value is:%f\n",m);
    y=(w1-(b/255.0))/w1;
    printf("The CYMK formate Yellow colour value is:%f\n",y);
    k=1-w1;
    printf("The CYMK formate Black colour value is:%f\n",k);}
    else{if((w2>=w3)&&(w3>=w1))
    {
    printf("The CYMK formate white colour value is2:%f\n",w2);
    c=(w2-(r/255.0))/w2;
    printf("The CYNK formate Cyan colour value is:%f\n",c);
    m=(w2-(g/255.0))/w2;
    printf("The CYMK formate Magnta colour value is:%f\n",m);
    y=(w2-(b/255.0))/w2;
    printf("The CYMK formate Yellow colour value is:%f\n",y);
    k=1-w2;
    printf("The CYMK formate Black colour value is:%f\n",k);}
    else{if((w3>=w2)&&(w2>=w1))
    {
    printf("The CYMK formate white colour value is3:%f\n",w3);
    c=(w3-(r/255.0))/w3;
    printf("The CYMK formate Cyan colour value is:%f\n",c);
    m=(w3-(g/255.0))/w3;
    printf("The CYMK formate Magenta colour value is :%f\n",m);
    y=(w3-(b/255.0))/w3;
    printf("The CYMK formate Yellow colour value is:%f\n",y);
    k=1-w3;
    printf("The CYMK formate Black colour value is :%f\n",k);
    }}}
        return 0;
    
}
