#include <stdio.h>

int main() {
    float basic_pay, gross_salary, net_salary;
    float HRA, TA, professional_tax;

    // Input basic pay from user
    printf("Enter the basic pay of the employee: ");
    scanf("%f", &basic_pay);

    // Calculate HRA and TA
    HRA = 0.1 * basic_pay;
    TA = 0.05 * basic_pay;

    // Calculate gross salary
    gross_salary = basic_pay + HRA + TA;

    // Calculate professional tax
    professional_tax = 0.02 * gross_salary;

    // Calculate net salary
    net_salary = gross_salary - professional_tax;

    // Display results
    printf("\nGross Salary: %.2f\n", gross_salary);
    printf("Professional Tax: %.2f\n", professional_tax);
    printf("Net Salary: %.2f\n", net_salary);

    return 0;
}

