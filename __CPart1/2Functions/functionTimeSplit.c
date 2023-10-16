/*
Write a function that prints the values of hours,minutes and seconds from a provided time in seconds.
*/

#include<stdio.h>

void timeSplit(int timeInSeconds);

int main(){

    int timeInSec = 6547;

    timeSplit(timeInSec); 
}

void timeSplit(int timeInSeconds){

    int remSeconds=timeInSeconds;

    int h=remSeconds/3600;   //hours    
    remSeconds = remSeconds-(h*3600);

    int m=remSeconds/60; //minutes
    remSeconds =remSeconds-(m*60);

    printf("%d Seconds---> %dH:%dM:%dSec\n",timeInSeconds,h,m,remSeconds);

}
