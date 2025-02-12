#include <stdio.h>
#include <conio.h>
void main()
{
    int rows = 3;
    int n = 1;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("%d", n++);
        }
        printf("\n");
    }
    getch();
}