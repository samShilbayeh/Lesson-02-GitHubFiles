/*
Write the function  that inserts an integer n in its right place in a 
sorted array tab.
*/

#include<stdio.h>
#include <stdbool.h>

void main(){
    
    int intArray1[]={1,3,10};
    int numToInsert=22;
    
    int sizeOfArray1=sizeof(intArray1)/sizeof(intArray1[0]);
    int intArray2[sizeOfArray1+1];
    
    
  //  intArray2[0]=numToInsert;
    int i=0;
    int j=0;
    bool numIsInserted=false;
    
    for(  ; i<(sizeOfArray1); ){       //copy array 1 to 2 with insertion
        if(numToInsert<=intArray1[i] && !numIsInserted){
            intArray2[j]=numToInsert;
            numIsInserted=true;
            j++;
        }          
            
        intArray2[j]=intArray1[i];
        i++;
        j++;
    }
    
    if(numToInsert>intArray1[i] && !numIsInserted)      //insert at the end 
        intArray2[j]=numToInsert;
    
     for(int i=0; i<sizeof(intArray2)/sizeof(intArray2[0]); i++)
        printf("%d ",intArray2[i]);
}