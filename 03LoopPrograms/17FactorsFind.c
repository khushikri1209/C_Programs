 #include <stdio.h>
 #include<conio.h>

void main()
 {
     int i, num;
 
     /* Input number from user */
     printf("Enter any number to find its factor: ");
     scanf("%d", &num);
 
     printf("All factors of %d are: \n", num);
 
     /* Iterate from 1 to num */
     for(i=1; i<=num; i++)
     {

         if(num % i == 0)
         {
             printf("%d, ",i);
         }
     }
 
     getch();
 }