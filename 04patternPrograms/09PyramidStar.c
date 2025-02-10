#include <stdio.h>
 #include<conio.h>
void main()
 {
     int i, j, rows;
 
     /* Input number of rows to print */
     printf("Enter number of rows : ");
     scanf("%d", &rows);
 
     /* Iterate through rows */
     for(i=1; i<=rows; i++)
     { 
         /* Print leading spaces */
         for(j=i; j<rows; j++)
         {
             printf(" ");
         }
 
         /* Print star */
         for(j=1; j<=(2*i-1); j++)
         {
             printf("*");
         }
 
         /* Move to next line */
         printf("\n");
     }
 
     getch();
 }