/*
Write a program that displays the length and width of a rectangle given the 
coordinates of 2 opposite corners on an orthonormal coordinate 
system: A (x1, y1) and B (x2, y2).


Note that there are 4 possible cases (see exercise in slides "C Syntax-Part3.pdf" slide number 27)
*/

int main(){

    float x1= -2, y1=3, x2=4,y2=-5;

    float length = x2-x1;
    float width = y2-y1;

    if(length<0)            //convert to +ve
        length*= -1;
        
    if(width<0)             //convert to +ve
        width*=-1;
        
    printf("The rectangle length is %g and the width is %g", length,width);    


    return 0;
}