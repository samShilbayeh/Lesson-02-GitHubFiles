/*
Write a recursive function that calculates the nth number in the Fibonacci sequence. 
The Fibonacci sequence is defined as follows: the first two numbers are 0 and 1, 
and each subsequent number is the sum of the two preceding ones.
The function should take an integer 'n' as input and return the nth Fibonacci number.
Example : fibonacci(0) = 0, fibonacci(1) = 1,  fibonacci(2) = 1
fibonacci(3) = 2, fibonacci(4) = 3,  fibonacci(5) = 5, fibonacci(6) = 8, etc..
*/

#include<stdio.h>

int recFib(int n);

int main(){
    int n=7;
    int result=0;
    
    result = recFib(n);
    
    printf("Fibonacci(%d) = %d",n,result);
}

int recFib(int n){
    
    if(n==0)
        return 0;
    else if(n==1)
        return 1;
    else
        return (recFib(n-1)+ recFib(n-2));
}    