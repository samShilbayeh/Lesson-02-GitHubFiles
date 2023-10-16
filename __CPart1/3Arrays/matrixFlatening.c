/*
Write a program that displays the matrix resulting from flattening a 
provided 2D array (concatenating the elements of its rows)

*/
#include <stdio.h>

int main(void){
    
    int intMatrix[2][3] = {{1,2,3},{6,7,9}} ;
    
    int size = sizeof(intMatrix)/sizeof(intMatrix[0][0]);
    
    printf("size = %d\n",size);
    
    int intArray[size];

    
       
    int intArrayIndex=0;
    printf("Matrix:\n");
    for (int i=0;i<2;i++){
        for(int j=0;j<3;j++){           
          //  printf("'%d'",intArrayIndex);
            intArray[intArrayIndex]=intMatrix[i][j];
            intArrayIndex++;         
            printf("%d ", intMatrix[i][j] );
        }  
         printf("\n");
                    
    }
    
    printf("Matrix after being flattened:\n");
    for (int i=0;i<size;i++)
        printf("%d ",intArray[i]);
  
}