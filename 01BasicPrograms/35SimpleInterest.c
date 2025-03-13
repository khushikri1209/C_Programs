#include <stdio.h>
#include <conio.h>
void main()
{
    float principle, rate, time, SI, Amount;
    printf("Enter Principle:- ");
    scanf("%f", &principle);
    printf("Enter Rate: ");
    scanf("%f", &rate);
    printf("Enter time: ");
    scanf("%f", &time);

    SI = (principle * rate * time) / 100;
    Amount = principle + SI;
}