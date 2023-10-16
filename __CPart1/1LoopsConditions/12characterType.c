/*
● Create a program that takes a character as input and
determines its type, displaying one of the following:
– 'uppercase' if it is an uppercase letter
– 'lowercase' if it is a lowercase letter
– 'number' if it is a digit between 0 and 9
– '-' for any other type of character"
*/

#include<stdio.h>

int main(){
    
    char inputChar='5';
    
    if(inputChar>='A' && inputChar <='Z')
        printf("'%c' is an uppercase letter",inputChar);
    else if(inputChar>='a' && inputChar <='z')
        printf("'%c'is an lowercase letter",inputChar);
    else if(inputChar>='0' && inputChar <='9')
        printf("'%c' is a number",inputChar);
    else
        printf("-");   //'-' for any other type of character"
}