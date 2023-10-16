/*

Write a function that tests if a provided integer is prime.
An integer is prime if it divides just over 1 and over itself.

Note: 1 is not considered as prime.

*/

#include<stdio.h>
#include<math.h>
#include<stdbool.h>


bool isPrime (int num);     // function declaration 


int main(){
    
    int num = 13;//169;

    printf("Enter a number to check if is a prime number\n");
    scanf("%d",&num);
    
         
    if(!(isPrime(num)) || num==1)
        printf("%d is NOT a prime number", num);
    else 
        printf("%d is a prime number", num);    
}

bool isPrime (int num){     // function definition

    bool PrimeFlag = true; //Sets to false if the number is not a prime number

    for(int i = 2; i <= (num/2);i++){ // 
        if (i>2 && i%2==0)     //skip dividing on even numbers > 2
            continue;
        if (num%i==0){
            PrimeFlag = false;
            printf("Divisor = %d\n", i);           
            return PrimeFlag; //break;            //exit the function/loop if a divisor is found
        }
    }     
   return PrimeFlag; 
}