#include <stdio.h>
#include <math.h>
 int main(){
     int x,y;
     double a;
     printf("enter two numbers : ");
     scanf("%d%d",&x,&y);
     a=pow(x,y);
     printf("the power of numbers %d^%d is :%.2lf",x,y,a);
return 0;
}