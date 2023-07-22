#include <stdio.h>
#include <math.h>
int main()
{
    float salary, tax;
    printf("Enter your salary: $ ");
    scanf("%f", &salary);
    if (salary >= 0 && salary < 15000)
    {
        tax = 0.00 + (0.15) * (salary - 0.00);
        printf("Your levied amount of tax: $%.2f ", tax);
    }
    else if (salary >= 15000 && salary < 30000)
    {
        tax = 2250.00 + (0.18) * (salary - 15000.00);
        printf("Your levied amount of tax: $%.2f ", tax);
    }
    else if (salary >= 30000 && salary < 50000)
    {
        tax = 5400.00 + (0.22) * (salary - 30000);
        printf("Your levied amount of tax: $%.2f ", tax);
    }
    else if (salary >= 50000 && salary < 80000)
    {
        tax = 11000.00 + (0.27) * (salary - 50000.00);
        printf("Your levied amount of tax: $ %.2f", tax);
    }
    else if (salary >= 80000 && salary < 150000)
    {
        tax = 21600.00 + (0.33) * (salary - 80000.00);
        printf("Your levied amount of tax: $%.2f", tax);
    }
    else
    {
        printf("Please enter a amount within valid range!");
    }
    return 0;
}