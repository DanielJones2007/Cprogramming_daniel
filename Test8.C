#include<stdio.h>
int main()
{
    int age=22;
    int *ptr=&age;
    printf("%d\n",age);//value of age
    printf("%p\n",age);//address of age;
    printf("%p\n",*ptr);//address of age;
    printf("%p\n",*ptr);//address og age;
    printf("%d\n",age);//value of age;
    printf("%d\n",age);//value of age;
    return 0;

}