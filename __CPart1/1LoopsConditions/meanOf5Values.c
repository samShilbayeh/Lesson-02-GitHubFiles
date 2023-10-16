/*
*Create a program that computes the mean value of a set of
five numbers entered by the user.
● The program should :
– prompt the user to input five numerical values
– calculate their mean
– display the result as the mean value.
*/

#include<stdio.h>
int main(void){
    
    float n1=3,n2=2,n3=1,n4=4,n5=2;
    
    float mean = (n1+n2+n3+n4+n5)/5;
    
    printf ("Mean = %f:",mean);
    
}
