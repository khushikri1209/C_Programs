#include <stdio.h>
#include <conio.h>
void main()
{
    int age;
    printf("\nEnter your age: ");
    scanf("%d", &age);
    if (age >= 18)
    {
        printf("You are able to vote");
    }
    else
    {
        printf("You are not able to vote");
    }
}