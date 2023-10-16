/*
Prompt the user to enter the size of the array, allocate memory for it, and 
then ask the user to input values for each element. Finally, display the contents of the array. 

If you use knowledgeable, hardcode the values of size and array elements.
*/

#include<stdio.h>
#include<stdlib.h>

void displayArray(int *ptr,int size);
int main(){
    
    int size=5;
        
    printf("Please enter an array size\n");
    scanf("%d",&size);
    int *intPtr = (int *)calloc(size, sizeof(int));
     
    if (intPtr == NULL) { // Check if memory allocation was successful
        printf("Memory allocation failed.\n");
        return 1;
    }    

    for(int i=0;i<size;i++){
        printf("Enter element in index # %d\n",i);
        scanf("%d",(intPtr + i));    
    }

    displayArray(intPtr,size);
    free(intPtr);
    return 0;
}



void displayArray(int *ptr,int size){
    
    printf("Array : \n");
    for(int i=0;i<size;i++){
        printf("%d ", *(ptr+i));
       // ptr++;
    }

}