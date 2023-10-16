/*
● Create a program that calculates the absolute value of a given
number.
● The program should take an input number, compute its
absolute value and display it.
*/

#include<stdio.h>

int main(){

    int number = -4;

    // printf("Please enter a number\n");
    //scanf("%d",&number);
    if (number >= 0)
        printf("The absolute value for %d is: %d",number,number);
    else
        printf("The absolute value for %d is: %d",number,number*-1);
    return 0;
}