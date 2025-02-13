#include <stdio.h>
#include<conio.h>

// Driver code
void main()
{
	int A, B, quotient = 0, remainder = 0;

	// Ask user to enter the two numbers
	printf("Enter two numbers A and B : \n");

	// Read two numbers from the user || A = 17, B = 5
	scanf("%d%d", &A, &B);

	// Calculate the quotient of A and B using '/' operator
	quotient = A / B;

	// Calculate the remainder of A and B using '%' operator
	remainder = A % B;

	// Print the result
	printf("Quotient when A/B is: %d\n", quotient);
	printf("Remainder when A/B is: %d", remainder);

	getch();
}
