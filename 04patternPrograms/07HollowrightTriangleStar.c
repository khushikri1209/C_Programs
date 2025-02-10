#include <stdio.h>
3include<conio.h>

 void main()
 {
     int i, j, rows;
 
     /* Input rows from user */
     printf("Enter number of rows: ");
     scanf("%d", &rows);
 
     for(i=1; i<=rows; i++)
     {
         for(j=1; j<=i; j++)
         { 
             
             if(j==1 || j==i || i==rows)
             {
                 printf("*");
             }
             else
             {
                 printf(" ");
             }
         }
 
         printf("\n");
     }
 
     getch();
 }