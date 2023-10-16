/*
Write a program that calculates and displays the factorial of a provided integer.
Ex : Factorial of 5 = 5! = 5*4*3*2*1
*/

#include<stdio.h>

int main(){
    
    int n=5;
    int factorial=n;
    
    if (n==0){
        printf("The factorial of 0 = 1");
        return 0;
    }
    
    for(int i = n-1 ;i>=1;i--)
        factorial  *= i;    
        
    printf("The factorial of %d = %d",n, factorial);    
    
    return 0;
}