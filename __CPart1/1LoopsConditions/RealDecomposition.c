/*

● Write a program that decompose a real into its integer part
and its decimal part.
– Example : For 4.35, we get 4 and 0.35
– Hint : Use conversions

*/
#include<stdio.h>
int main(void){
    
    float vf=4.35;
    
    printf ("The number is : %f\n", vf );
    printf ("Integer part = %d,\nDecimal part = %f  :",(int)vf, vf - (int)vf );
    
}
