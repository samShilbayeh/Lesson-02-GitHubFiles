/*
Write a C program that takes an array of integers and uses pointers to display the elements of the array. 

The program should do the following:

Define an integer array with a fixed size (e.g., 5 elements) and fill it with values.
Use a pointer to iterate through the array and print each element.
Display the elements of the array in their original order.
*/

#include<stdio.h>

void displayArray(int *ptr,int size);
void main(){
    
    int intArray[]={1,2,3,4,5};
    int *ptr = intArray;

    int size=sizeof(intArray)/sizeof(intArray[0]);

    displayArray(intArray,size);
}


void displayArray(int *ptr,int size){
    for(int i=0;i<size;i++){
        printf("%d ", *(ptr+i)) ;
       // ptr++;
    }

}