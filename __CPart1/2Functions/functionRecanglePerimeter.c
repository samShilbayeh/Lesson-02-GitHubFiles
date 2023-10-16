
/*
Write a function that computes and returns the perimeter of a 
rectangle (length and width are integers provided as parameters). 
*/
#include<stdio.h>

float perimeterOfARectangle(float, float); //function declaration 

int main(){

    float length = 2;
    float width = 4;

    
        
    printf("The the perimeter of a rectangle with length %g and width %g is %g", 
            length,width, perimeterOfARectangle(length,width));    

    return 0;
}


float perimeterOfARectangle(float length, float width){ //function definition is 
    return 2 * (length + width); //   
}
