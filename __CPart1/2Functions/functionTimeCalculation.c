/*
Write a function that computes a time in number of seconds from 3 given integer values hours, minutes and seconds.
*/

#include<stdio.h>

int timeCalculation (int h,int m, int s);

int main(){

    int h =5,m=3,s=5;

    printf("The time in seconds is %d", timeCalculation(h,m,s));
}

int timeCalculation (int h,int m, int s){
    return h * 3600 + m *60 + s;
}