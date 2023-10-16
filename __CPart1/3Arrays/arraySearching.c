/*
Write a program that displays the first position of an integer 'n' in an array of integers 'tab'. If the element does not exist, it displays -1.

*/
#include<stdio.h>
#include <stdbool.h>

void main(){
    
    int intArray[]  = {1,2,-77,4,-5};
    int num = 4;       
    int indexOfNum=0;
    bool isFound =false;
    
    for(int i= 0; i<(sizeof(intArray)/sizeof(intArray[0])); i++){    // 
        if(num==intArray[i]){
            indexOfNum=i;
            isFound=true;
        }    
    }
    if(isFound)
        printf("Index of the first elemnt matching the number %d is %d with position of %d",num, indexOfNum ,indexOfNum+1);
    else
        printf("-1 : no matching element found in the array ");    
}