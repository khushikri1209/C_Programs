#include <stdio.h>
#include <conio.h>
void main()
{
    int age;
    printf("Enter your age : ");
    scanf("%d", &age);
    if (age > 18)
    {
        printf("you are able to drive");
    }
    else
    {
        printf("you are not able to drive");
    }
}