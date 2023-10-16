/*
Write a function that calculates and returns the absolute value of a provided integer.
*/

#include<stdio.h>

int absoluteValue(int num); // function declaration

int main(){

    int number = -5;

    printf("Enter a number\n");
    scanf("%d",&number);

    printf("The absolute value of %d is %d", number,absoluteValue(number) );
}

int absoluteValue(int num){   // function definition
    if(num<0)
        return num * -1;
    return num;
}