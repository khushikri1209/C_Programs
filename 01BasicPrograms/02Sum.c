#include <stdio.h>
#include <conio.h>
int main()
{
    int num1, num2, sum;
    printf("Enter first num:");
    scanf("%d", &num1);
    printf("Enter second num:");
    scanf("%d", &num2);
    sum = num1 + num2;
    printf("%d + %d=%d", num1, num2, sum);
    getch();
    return 0;
}