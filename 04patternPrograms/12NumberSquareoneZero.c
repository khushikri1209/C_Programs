#include <stdio.h>
#include<conio.h>
void main()
 {
     int rows, cols, i, j;
 
     /* Input rows and columns from user */
     printf("Enter number of rows: ");
     scanf("%d", &rows);
     printf("Enter number of columns: ");
     scanf("%d", &cols);
 
     for(i=1; i<=rows; i++)
     {
         for(j=1; j<=cols; j++)
         {
             if(i%2 == 1)
             {
                 printf("1");
             }
             else
             {
                 printf("0");
             }
         }
 
         printf("\n");
     }
 
     getch();
 }