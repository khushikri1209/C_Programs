// C program to print a triangle 
#include <stdio.h> 

// Driver code 
int main() 
{ 
	int n = 6; 

	// ith row has i elements 
	for (int i = 1; i <= n; i++) { 
		for (int j = 1; j <= i; j++) { 
			printf("*"); 
		} 
		printf("\n"); 
	} 
	return 0; 
}
