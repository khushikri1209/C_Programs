#include<stdio.h>
#include<conio.h>
void main(){
    int n,i,sum=0;
    printf("Enter upper limit: ");
    scanf("%d", &n);

    /* Find sum of all numbers */
    for(i=1; i<=n; i++)
    {
        sum += i;
    }

    printf("Sum of first %d natural numbers = %d", n, sum);

    getch();
}
