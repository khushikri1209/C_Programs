#include <stdio.h>
 #include<conio.h>

 void main()
 {
     int i, j, rows;
 
     /* Input number of rows from user */
     printf("Enter rows : ");
     scanf("%d", &rows);
 
 
     for(i=1; i<=rows; i++)
     {
         /* Print trailing spaces */
         for(j=1; j<=rows-i; j++)
         {
             printf(" ");
         }
 
         for(j=1; j<=rows; j++)
         {
             if(i==1 || i==rows || j==1 || j==rows)
                 printf("*");
             else
                 printf(" ");
         }
 
         printf("\n");
     }
 
     getch();
 }