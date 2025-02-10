#include <stdio.h>
#include<conio.h>
void main()
 {
     int i, j, N;
 
     /* Input number of rows from user */
     printf("Enter rows: ");
     scanf("%d", &N);
 
 
     for(i=1; i<=N; i++)
     {
         /* Print trailing spaces */
         for(j=1; j<i; j++)
         {
             printf(" ");
         }
 
         for(j=1; j<=N; j++)
         {
             printf("*");
         }
 
         printf("\n");
     }
 
    getch();
 }