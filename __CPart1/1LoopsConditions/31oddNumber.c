/*
Write a function that checks whether a provided integer is odd.
*/

#include<stdio.h>
#include<stdbool.h>
#include<math.h>

bool oddNumber(int num); // function declaration


int main(){

    int num = 6;
     
    if(oddNumber(num))
        printf("%d is an add number",num);
    else    
        printf("%d is an even number", num);   
    
}

bool oddNumber(int num){   // function definition
    return (num % 2);
}
