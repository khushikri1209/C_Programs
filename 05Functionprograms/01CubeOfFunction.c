#include <stdio.h>
#include<conio.h>

/* Function declaration */
double cube(double num);

int main()
{
    int num;
    double c;
    
    /* Input number to find cube from user */
    printf("Enter any number: ");
    scanf("%d", &num);
    
    c = cube(num);

    printf("Cube of %d is %.2f", num, c); 
    
    return 0;
}

/**
 * Function to find cube of any number
 */
double cube(double num)
{
    return (num * num * num);
}
