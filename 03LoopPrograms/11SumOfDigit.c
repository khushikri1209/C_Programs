#include <stdio.h>
#include<conio.h>

 void main()
 {
     int num, sum=0;
 
     /* Input a number from user */
     printf("Enter any number to find sum of its digit: ");
     scanf("%d", &num);
 
     /* Repeat till num becomes 0 */
     while(num!=0)
     {
         /* Find last digit of num and add to sum */
         sum += num % 10;
 
         /* Remove last digit from num */
         num = num / 10;
     }
 
     printf("Sum of digits = %d", sum);
 
     getch();
 }