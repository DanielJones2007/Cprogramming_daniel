#include<stdio.h>
int main()
{
    int marks[3];
    printf("Enter Physics Mark");
    scanf("%d",&marks[0]);
    printf("Entre the Chemistry Mark");
    scanf("%d",&marks[1]);
    printf("Enter the Maths Marks ");
    scanf("%d",marks[2]);
    printf("physics=%d,",&marks[0]);//physics
    printf("chemistry=%d,",&marks[0]);//chemistry
    printf("maths=%d,",&marks[0]);//maths
    return 0;
}
