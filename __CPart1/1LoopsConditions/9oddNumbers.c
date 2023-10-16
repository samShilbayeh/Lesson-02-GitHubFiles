/*
● Develop a program that determines whether a given integer is
odd or even.
● The program should prompt the user to input an integer,
perform the odd or even check, and then display a message
indicating whether the number is odd or even.
*/

#include<stdio.h>

int main(){

    int number = 3.1;

    // printf("Please enter a number\n");
    //scanf("%d",&number);
    if (number % 2 == 0)
        printf("%d is an even number",number);
    else
        printf("%d is an odd number",number);
    return 0;
}
