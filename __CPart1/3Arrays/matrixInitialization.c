/*
Write a function initialize2D (int [] [] tab) that initializes tab in such 
a way that for each pair (line i,column j) the corresponding case (i,j) 
contains the value i + j.
*/

//void initialize2D(int tab[][]);

#include <stdio.h>


void initialize2D(int tab[][3]);    //  ************number of lines/rows  is optional*************  


int main(void){
    
    int intMatrix[2][3] = {{1,2,3},{6,7,9}} ;

    //clrscr()

    initialize2D(intMatrix);   

    
}

void initialize2D(int tab[][3]){
    
     for (int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            tab[i][j] =i+j;         
            printf("%d ", tab[i][j] );
        }  
        printf("\n");
    }
   
    
}