a=a+b
b=b-a
a=b-a 

#include<stdio.h>
void swap(int *old,int *new)
{
    int temp=*old;
    *old=*new;
    *new=temp;
    printf("swapped%d\n",*old,*new);
    
}
int main()
{
    int a=10,b=20;
    printf("Before swap");
    printf("%d%d\n",a,b);
    printf("Aftre swap");
    swap(&a,&b);

}