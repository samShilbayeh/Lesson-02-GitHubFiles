/*
● Create a program that calculates the perimeter of a rectangle
using user-provided values for its length and width.
● The program should :
– prompt the user to enter the length and width of the
rectangle
– calculate the perimeter using the formula P = 2(l + w),
where P is the perimeter, l is the length, and w is the width
– display the calculated perimeter to the user
*/


#include<stdio.h>
int main(void){
    
    float recLength=5,recWidth=4;
    
    
    printf("The rectangle Perimeter is %f", 2*(recLength+recWidth));
}
