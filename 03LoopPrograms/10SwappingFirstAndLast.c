 #include <stdio.h>
 #include<conio.h>
 #include <math.h>
 
 void main()
 {
     int num, swappedNum;
     int firstDigit, lastDigit, digits;
 
     /* Input number from user */
     printf("Enter any number: ");
     scanf("%d", &num);
 
     /* Find last digit */
     lastDigit  = num % 10;
 
     /* Find total number of digit - 1 */
     digits     = (int)log10(num); 
 
     /* Find first digit */
     firstDigit = (int)(num / pow(10, digits)); 
 
     swappedNum  = lastDigit;
     swappedNum *= (int) pow(10, digits);
     swappedNum += num % ((int) pow(10, digits));
     swappedNum -= lastDigit;
     swappedNum += firstDigit;
 
     printf("Original number = %d", num);
     printf("Number after swapping first and last digit: %d", swappedNum);
 
     getch();
 }