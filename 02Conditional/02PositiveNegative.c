#include <stdio.h>
#include<conio.h>

void main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    if(n>0){
        printf("positive");
    }
    else if(n<0){
        printf("negative");

    }
    else if(n==0){
        printf("Zero");
    }
}
