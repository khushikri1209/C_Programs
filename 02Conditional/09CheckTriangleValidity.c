#include <stdio.h>
#include<conio.h>

void main()
{
    int angle1, angle2, angle3, sum;

    /* Input all three angles of triangle */
    printf("Enter three angles of triangle: \n");
    scanf("%d%d%d", &angle1, &angle2, &angle3);

    /* Calculate sum of angles */
    sum = angle1 + angle2 + angle3;

    if(sum == 180 && angle1 > 0 && angle2 > 0 && angle3 > 0) 
    {
        printf("Triangle is valid.");
    }
    else
    {
        printf("Triangle is not valid.");
    }

    getch();
}