/*
Write a program that inserts an element n at the end of an array of integers tab.
NB : The result is another array of different dimension.
*/

#include<stdio.h>
//#include <stdbool.h>

void main(){
    
    int intArray1[]={1,3,2};
    int numToInsert=7;
    
    int sizeOfArray1=sizeof(intArray1)/sizeof(intArray1[0]);
    int intArray2[sizeOfArray1+1];
    
    
    for(int i= 0; i<sizeOfArray1; i++){    //copy array 1 to 2
        intArray2[i]=intArray1[i];
    }
    
    intArray2[sizeOfArray1]=numToInsert;
    
     for(int i=0; i<sizeof(intArray2)/sizeof(intArray2[0]); i++)
        printf("%d ",intArray2[i]);
     
}