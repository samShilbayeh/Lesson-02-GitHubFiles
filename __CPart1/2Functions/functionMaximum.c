/*
Write a function that returns the maximum of four provided integers.
*/

#include<stdio.h>
#include<math.h>

int maxOfFour (int n1,int n2, int n3, int n4); //function declaration 

int main(){
    
    int number1=56,number2=2,number3=4,number4=2;
    //int max=number1;
    
   maxOfFour(number1,number2,number3,number4);
        
   // int maxNumber = fmax(number1,(fmax(number2,(fmax(number3,number4)))));
    
  //  printf("****%d****\n ",maxNumber);    
    printf("Largest number of %d,%d,%d and %d is: %d",number1,number2,number3,number4,maxOfFour(number1,number2,number3,number4));
        
}

int maxOfFour (int n1,int n2, int n3, int n4){    //function definition

    int max=n1;
    
    if(max<n2)
        max=n2;
    if(max<n3)
        max=n3;
    if(max<n4)
        max=n4;
    
    return max; 
}