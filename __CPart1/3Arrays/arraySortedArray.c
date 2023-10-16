/*
Write a program that checks whether an array of integers is correctly sorted. 
*/
#include<stdio.h>
#include <stdbool.h>

void main(){
    
    int intArray[]  = {1,2,3,4,5};
   // int minNumber = intArray[0];       //minNumber is initialized to the first elemen
    int isSorted =true;           
    
    for(int i= 0; i<((sizeof(intArray)/sizeof(intArray[0])-1)); i++){    // 
        if(intArray[i]>intArray[i+1]){
           isSorted=false;
           break;
        }    
    }   
    if(isSorted)
        printf("Array is sorted");
    else
        printf("Not Sorted");
}