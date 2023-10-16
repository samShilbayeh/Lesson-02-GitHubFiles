/*
Write a program concatenates two arrays of integers in a third one.
*/
#include<stdio.h>

void main(){
    
    int intArray1[]={1,3,2};
    int intArray2[]={1,5,3,5};
 
    
    int sizeOfArray1=sizeof(intArray1)/sizeof(intArray1[0]);
    int sizeOfArray2=sizeof(intArray2)/sizeof(intArray2[0]);
    
    int intArrayConc[sizeOfArray1 + sizeOfArray2];
    
    int indexOfintArrayConc=0;
    
    
    for(int i= 0; i<sizeOfArray1; i++){    //copy array 1 to conc Array
        intArrayConc[indexOfintArrayConc]=intArray1[i];
        indexOfintArrayConc++;
    }
    
    for(int i= 0; i<sizeOfArray2; i++){    //copy array 2 to Conc Array
        intArrayConc[indexOfintArrayConc]=intArray2[i];
        indexOfintArrayConc++;
    }
    
     for(int i=0; i<sizeOfArray1+sizeOfArray2; i++)
        printf("%d ",intArrayConc[i]);
     
}