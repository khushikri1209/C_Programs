 #include <stdio.h>
 #include<conio.h>

void main()
 {
     int n, num, rev = 0;
 
     /* Input a number from user */
     printf("Enter any number to check palindrome: ");
     scanf("%d", &n);
 
     
     num = n; 
 
    
     while(n != 0)
     {
         rev = (rev * 10) + (n % 10);
         n  /= 10;
     }
 
     /* Check if reverse is equal to 'num' or not */
     if(rev == num)
     {
         printf("%d is palindrome.", num);
     }
     else
     {
         printf("%d is not palindrome.", num);
     }
getch();
 }