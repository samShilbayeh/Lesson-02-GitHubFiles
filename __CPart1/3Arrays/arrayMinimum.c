/*
Write a program that displays the minimum value among the elements of an array of integers.
*/
#include<stdio.h>

void main(){
    
    int intArray[]  = {1,2,-77,4,-5};
    int minNumber = intArray[0];       //minNumber is initialized to the first elemen
    int indexOfMinimum=0;           //extra: display the index
    
    for(int i= 1; i<(sizeof(intArray)/sizeof(intArray[0])); i++){    // start with the second element since minNumber is initialized to the first element
        if(minNumber>intArray[i]){
            minNumber=intArray[i];
            indexOfMinimum=i;
        }    
    }   
    printf("Minimum number is %d with index of %d", minNumber,indexOfMinimum);
 
}