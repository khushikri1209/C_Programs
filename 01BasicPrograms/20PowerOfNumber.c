#include <stdio.h>

// Function to calculate power
double power(double base, int exponent)
{
    double result = 1.0;
    for (int i = 0; i < exponent; i++)
    {
        result *= base;
    }
    return result;
}

int main()
{
    double base;
    int exponent;

    // Input from user
    printf("Enter the base: ");
    scanf("%lf", &base);
    printf("Enter the exponent: ");
    scanf("%d", &exponent);

    // Calculate power
    double result = power(base, exponent);

    // Display result
    printf("%.2lf^%d = %.2lf\n", base, exponent, result);

    return 0;
}
