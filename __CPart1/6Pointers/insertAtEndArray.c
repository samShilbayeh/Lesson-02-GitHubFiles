/*
Write a C function that inserts a new integer value at the end of an integer array using pointers.
*/

#include<stdio.h>
#include<stdlib.h>

void insertAtEndArray(int *ptr,int size);
int main(){
    
    int size=5;
    
    int numToInsert=7;
    
    int *intPtr = (int *)calloc(size, sizeof(int));
     
    if (intPtr == NULL) { // Check if memory allocation was successful
        printf("Memory allocation failed.\n");
        return 1;
    }
        
    for(int i=0;i<size;i++)
        *(intPtr + i) = i*2 +1;
        
   printf("Old Array: \n");
    for(int i=0;i<=size;i++)
        printf("%d ",*(intPtr + i));
   
     // printf("ptr= %d\n with size %d\n",intPtr,sizeof(intPtr)/sizeof(int));
    
 
    int *newPtr = (int*) realloc (intPtr , (size+1) * sizeof(int));
    if (newPtr == NULL) { // Check if memory allocation was successful
       printf("Memory allocation failed.\n");
        return 1;
    }   
    
    *(newPtr+size)=numToInsert;
    
    printf("\nNew Array: \n");
    for(int i=0;i<=size;i++)
        printf("%d ",*(intPtr + i));
 

 //   insertAtEndArray(intPtr,size);

    free(intPtr);   //free memory
    free(newPtr);   //free memory

    return 0;
}

void insertAtEndArray(int *ptr,int size){

}