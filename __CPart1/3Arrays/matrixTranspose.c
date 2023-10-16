/*
Write a program that transposes a provided 2D array.
The transpose of an array tab[N][M] is another array trans[M][N] where each 
element of indices (i, j) of trans is equal to the element of indices (j, i) of tab.
*/

#include <stdio.h>

int main(void){
    
    int intMatrix[2][3] = {{1,2,3},{6,7,9}} ;
    int intMatrixTrans[3][2];

    printf("Matrix:\n");
    for (int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            intMatrixTrans[j][i]=intMatrix[i][j];         
            printf("%d ", intMatrix[i][j] );
        }  
        printf("\n");
    }
    
    printf("Transpose of Matrix:\n");
    for (int i=0;i<3;i++){
        for(int j=0;j<2;j++){
         //   intMatrixTrans[j][i]=intMatrix[i][j];         
            printf("%d ", intMatrixTrans[i][j] );
        }  
        printf("\n");
    }
    
}