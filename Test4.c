#include <stdio.h>

void calculate_gross_salary() {
    // Declare variables for employee details
    char name[100], designation[100];
    int employee_id;
    float basic_salary, hra, special_allowance, other_allowances, gross_salary;

    // Capture employee details
    printf("Enter employee name: ");
    fgets(name, sizeof(name), stdin);  // Capture employee name with spaces
    printf("Enter employee ID: ");
    scanf("%d", &employee_id);
    getchar();  // To clear the newline character after employee_id input
    printf("Enter employee designation: ");
    fgets(designation, sizeof(designation), stdin);  // Capture designation with spaces
    printf("Enter basic salary: ");
    scanf("%f", &basic_salary);
    printf("Enter House Rent Allowance (HRA): ");
    scanf("%f", &hra);
    printf("Enter special allowance: ");
    scanf("%f", &special_allowance);
    printf("Enter other allowances: ");
    scanf("%f", &other_allowances);

    // Gross salary calculation
    gross_salary = basic_salary + hra + special_allowance + other_allowances;

    // Display employee details and gross salary
    printf("\nEmployee Details:\n");
    printf("Name: %s", name);
    printf("Employee ID: %d\n", employee_id);
    printf("Designation: %s", designation);
    printf("Gross Salary: %.2f\n", gross_salary);
}
