#include <stdio.h>
#include<conio.h>
void main()
 {
     int i, j, N;
 
     /* Input number of rows from user */
     printf("Enter number of rows: ");
     scanf("%d", &N);
 
     /* Iterate through N rows */
     for(i=1; i<=N; i++)
     {
         /* Iterate over columns */
         for(j=1; j<=N; j++)
         {
             /* Print star for each column */
             printf("*");
         }
         
         /* Move to the next line/row */
         printf("\n");
     }
 
     getch();
 }