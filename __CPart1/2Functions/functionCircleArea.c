/*Write a function that computes and returns the area of a circle with 
provided radius r.

*/
#include<stdio.h>

float areaOfaCircle(int );


int main(void){

float r=4;

printf("Area of a circle with radius %g = %g",r,areaOfaCircle(r));
}

float areaOfaCircle(int r){
    return 3.14 * r * r; //area = PI r pow 2  
}