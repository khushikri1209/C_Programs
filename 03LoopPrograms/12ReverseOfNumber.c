#include <stdio.h>
#include<conio.h>

 void main()
 {
     int num, reverse = 0;
 
     /* Input a number from user */
     printf("Enter any number to find reverse: ");
     scanf("%d", &num);
 
     /* Repeat the till 'num' becomes 0 */
     while(num != 0)
     {
        
         reverse = (reverse * 10) + (num % 10);
 
         num /= 10;
     }
 
     printf("Reverse = %d", reverse);
 
     getch();
 }