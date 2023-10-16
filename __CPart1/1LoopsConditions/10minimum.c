/*
Write a program that takes two input numbers and returns the
minimum value between them.
● The program should prompt the user to enter two numbers,
compare them, and then output the smaller of the two
numbers.
*/

#include<stdio.h>
int main(){
    int number1=2,number2=4;
    
    if(number1<number2)
        printf("%d is smaller than %d", number1, number2);
    else if(number2<number1)
        printf("%d is smaller than %d", number2, number1);
    else
        printf("%d is equal to %d", number1, number2);    

    
}