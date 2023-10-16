/*
Write a program that tests whether a given point P (x, y) is in the rectangle 
formed by the opposite corners A (x1, y1) and B (x2, y2).


There are 4 possible cases (see exercise in slides)
*/

#include<stdio.h>
int main(){

    float x1= 0, y1=0, x2=2,y2=-2;
    float x = 1, y=1;
 
    //chack if the x and y coordinates are in the rectangle
    if((x>=x1 && x<=x2) || (x>=x2 && x<=x1)){  // check for the x coodinate of the point
        if((y>=y1 && y<=y2) || (y>=y2 && y<=y1)){ // check for the y coodinate of the point
            printf("\nPoint P(%g,%g) is in the rectangle \n", x,y);
        }
        else{
                printf("\nPoint P(%g,%g) is not in the rectangle \n ", x,y);
        }
        
    }
    else{
        printf("\nPoint P(%g,%g) is not in the rectangle \n ", x,y);
    }

    return 0;
}