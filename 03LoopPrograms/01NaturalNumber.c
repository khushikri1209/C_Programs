#include <stdio.h>
#include<conio.h>
void main()
{
    int i, n;

    /* Input upper limit from user */
    printf("Enter any number: ");
    scanf("%d", &n);

    printf("Natural numbers from 1 to %d : \n", n);

    for(i=1; i<=n; i++)
    {
        printf("%d\n", i);
    }

    getch();
}