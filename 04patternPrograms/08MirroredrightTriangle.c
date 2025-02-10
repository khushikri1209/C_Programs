#include <stdio.h>
#include<conio.h>
void main()
 {
     int i, j, rows;
 
     /* Input rows from user */
     printf("Enter number of rows: ");
     scanf("%d", &rows);
 
     /* Iterate through rows */
     for(i=1; i<=rows; i++)
     {

         for(j=i; j<rows; j++)
         {
             printf(" ");
         }
 
         for(j=1; j<=i; j++)
         {
             printf("*");
         }
         printf("\n");
     }
     
     getch();
 }