/*
● Write a program that calculates the area of the ring formed by
two circles with respective radii r1 and r2.
*/
int main(){
    float r1=2,r2=6;//radii of circles 1 and 2
    const float PI=3.14;
    float areaOfRing=0;
    
    areaOfRing= 2*PI*(r2-r1);
    
    printf("The area of the ring with inner radius %g and outer radius %g is %g",r1,r2,areaOfRing);

    return 0;    
}