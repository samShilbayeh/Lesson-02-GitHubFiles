/*
Create a program that receives four input integers and
determines the maximum value among them.
● The program should prompt the user to input four integers,
compare them, and then output or return the largest of the
four numbers.
*/

#include<stdio.h>
#include<math.h>
int main(){
    
    int number1=56,number2=2,number3=4,number4=2;
    int max=number1;
    
    if(max<number2)
        max=number2;
    if(max<number3)
        max=number3;
    if(max<number4)
        max=number4;
        
    int maxNumber = fmax(number1,(fmax(number2,(fmax(number3,number4)))));
    
    printf("****%d****\n ",maxNumber);    
    printf("Largest number of %d,%d,%d and %d is: %d",number1,number2,number3,number4,max);
        
}