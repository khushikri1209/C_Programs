#include <stdio.h>
#include<conio.h>
void main()
{
    int num1, num2, num3, max;

    /* Input three numbers from user */
    printf("Enter three numbers: ");
    scanf("%d%d%d", &num1, &num2, &num3);


    if((num1 > num2) && (num1 > num3))
    {
        /* If num1 > num2 and num1 > num3 */
        max = num1;
    }
    else if(num2 > num3)
    {
        /* If num1 is not > num2 and num2 > num3 */
        max = num2;
    }
    else
    {
        max = num3;
    }

    /* Print maximum number */
    printf("Maximum among all three numbers = %d", max);
  getch();
}