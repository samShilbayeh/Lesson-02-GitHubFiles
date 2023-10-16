/*
Write a program that asks the user for a positive integer and then prints a pattern of asterisks in the shape of a right-angled triangle. 
The number of rows in the triangle is determined by the user's input.
Example : nbRows=5

* 
* * 
* * * 
* * * * 
* * * * * 
*/

#include <stdio.h>
int main(){
    
    int nOfRows=7;

    printf("Enter the number of rows of the tringle\n");
    scanf("%d", &nOfRows);

    for(int i=0;i<nOfRows;i++){
        for(int j=0;j<=i;j++)
            printf("*");
        printf("\n");    
    }
    
}