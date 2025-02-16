//Simple Do-While Loop

#include <stdio.h> 
#include <conio.h>
 
int  main() 
{ 
	int n = 0;


	do
	{
		printf( " Enter No.( 0 for exit) :: " );
		scanf( "%d", &n );
	}while( n != 0 );

	getch();
	return 0;
}