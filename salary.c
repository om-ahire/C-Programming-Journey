#include <stdio.h>

int main()
{
    float salary, bonus, finalSalary;

    printf("Enter salary: ");
    scanf("%f", &salary);

    if (salary < 20000)
    {
        bonus = salary * 0.20;
    }
    else if (salary <= 50000)
    {
        bonus = salary * 0.10;
    }
    else
    {
        bonus = salary * 0.05;
    }

    finalSalary = salary + bonus;

    printf("Final Salary: %.2f", finalSalary);

    return 0;
}