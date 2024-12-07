#include <stdio.h>
int main()
{
    int mark1, mark2, mark3, mark4;
    printf("Enter the marks for 4 subjects: \n");
    scanf("%d %d %d %d", &mark1, &mark2, &mark3, &mark4);
    if (mark1 >= 35 && mark2 >= 35 && mark3 >= 35 && mark4 >= 35) {
        printf("All marks are above 35. Student is Passed.\n");
        int total = mark1 + mark2 + mark3 + mark4;
        float average = total / 4.0;
        printf("Total Marks: %d\n", total);
        printf("Average Marks: %.2f\n", average);
        if (average >= 90)
            printf("Grade: A\n");
        else if (average >= 75)
            printf("Grade: B\n");
                else if (average >= 60)
            printf("Grade: C\n");
        else
            printf("Grade: D\n");
    } 
    else 
    {
        printf("Student is Fail.\n");
    
    return 0;
}