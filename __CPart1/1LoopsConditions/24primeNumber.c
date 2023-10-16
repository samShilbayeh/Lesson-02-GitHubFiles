/*

Write a program that tests whether a provided integer is prime. 
An integer is prime if it has exactly two distinct divisors: 1 and itself

Note: 1 is not considered as prime.

*/

#include<stdio.h>
#include<math.h>


int main(){
    
    int num = 13;//169;
    int notPrimeFalg = 0; //Sets to 1 if the number is not a prime number

    printf("Enter a number to check if is a prime number\n");
    scanf("%d",&num);
    
    for(int i = 2; i <= (num/2);i++){
        if (i>2 && i%2==0)     //skip dividing on even numbers > 2
            continue;
        if (num%i==0){
            notPrimeFalg = 1;
            printf("Divisor = %d\n", i);
            break;            //exit the loop if the if a divisor is found
        }
    }     
    if(notPrimeFalg==1 || num==1)
        printf("%d is NOT a prime number", num);
    else 
        printf("%d is a prime number", num);    
}