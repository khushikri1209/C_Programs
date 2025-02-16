#include <stdio.h>
#include<conio.h>
 int isPrime(int num);
 void printPrimes(int lowerLimit, int upperLimit);
 
 int main()
 {
     int lowerLimit, upperLimit;
     
     printf("Enter the lower and upper limit to list primes: ");
     scanf("%d%d", &lowerLimit, &upperLimit);
     
     // Call function to print all primes between the given range.
     printPrimes(lowerLimit, upperLimit);
     
     return 0;
 }
 void printPrimes(int lowerLimit, int upperLimit)
 {
     printf("All prime number between %d to %d are: ", lowerLimit, upperLimit);
     
     while(lowerLimit <= upperLimit)
     {
         // Print if current number is prime.
         if(isPrime(lowerLimit))
         {
             printf("%d, ", lowerLimit);
         }
         
         lowerLimit++;
     }
 }
 
 int isPrime(int num)   
 {  
     int i;  
       
     for(i=2; i<=num/2; i++)    
     {    
           
         if(num % i == 0)    
         {  
             return 0;  
         }    
     }   
       
     return 1;   
 }