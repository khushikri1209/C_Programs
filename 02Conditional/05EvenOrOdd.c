#include <stdio.h>
#include<conio.h>
void main()
{
    int num;

    /* Input number from user */
    printf("Enter any number to check even or odd: ");
    scanf("%d", &num);
    if(num % 2 == 0){

        printf("Number is Even.");
    }
    else
    {
        printf("Number is Odd.");
    }

    getch();
}