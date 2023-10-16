/*
● Write a program that calculates the area of a circle based on
user input for the radius.
● The program should use the formula A = πr², where A is the
area and r is the radius of the circle.
● Display the result to the user.
*/

#include<stdio.h>
int main(void){
    //var declarations
    float r=0;
    const float MY_PI=3.14;
    
   // getc();

    printf ("Please Enter a circle Radius:\n");
    scanf("%f",&r);
    printf("The area of the circle is %f", r*r*MY_PI);



}
