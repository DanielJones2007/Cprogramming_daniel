#include <stdio.h>
int calculator(char a,double b,double c)
{
    if (a=='+')
    printf("%.2lf+%.2lf=%.2lf\n",b,c,b+c);
    else if(a=='-')
    printf("%.2lf-%.2lf=%.2lf\n",b,c,b-c);
    else if(a=='*')
    printf("%.2lf*%.2lf=%.2lf\n",b,c,b*c);
    else if(a=='/')
    printf("%.2lf/%.2lf=%.2lf\n",b,c,b/c);
    else 
    printf("enter valid character");
    return 0;
}
int main(){
    char a;                 
    double b, c;
    printf("enter a chr(+,-,*,/): ");
    scanf("%c",&a);
    printf("enter two nos");
    scanf("%lf%lf",&b,&c);
    calculator(a,b,c);
    return 0;
}