 #include <stdio.h>
 #include <conio.h>

void main()
 {
     long long num;
     int count = 0;
 
     /* Input number from user */
     printf("Enter any number: ");
     scanf("%lld", &num);
 
     /* Run loop till num is greater than 0 */
     do
     {
         /* Increment digit count */
         count++;
 
         /* Remove last digit of 'num' */
         num /= 10;
     } while(num != 0);
 
     printf("Total digits: %d", count);
 
     getch();
 }