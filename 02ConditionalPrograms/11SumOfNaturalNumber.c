#include <stdio.h>
#include<conio.h>

void main()
{
	int i, s = 0;
	int n = 10;
	i = 1;
	while (i <= n) {
	
		s += i;
		i++;
	}
	// printing the result
	printf("Sum = %d", s);
	getch();
}
