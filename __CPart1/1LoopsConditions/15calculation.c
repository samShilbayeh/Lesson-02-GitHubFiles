/*
● Write a program that computes the result of an operation
performed on two provided integers (right part and left part)
using a provided operator: *, -, +, /
*/
#include <stdio.h>

int main(void){
    
    int leftPart = 3;
    int rightPart = 4;
    int result =0; 
    char opr = '*';         //operator 
    
    switch (opr){
        case '*':
           result=leftPart * rightPart;
           break;
        case '-':
           result=leftPart - rightPart;
           break;
        case '+':
           result=leftPart + rightPart;
           break;   
        case '/':
           result=leftPart / rightPart;
           break;
        defualt:
            printf("Not valid");
        }
    printf("%d %c %d = %d",leftPart,opr,rightPart,result);
    
}