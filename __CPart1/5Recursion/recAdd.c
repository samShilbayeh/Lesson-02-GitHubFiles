/*
Write a recursive function that takes a positive integer 'n' as 
input and returns the sum of numbers from 1 to 'n'
*/


#include<stdio.h>

int recAdd(int num);

int main(){
    int num=5;
    int sum=0;
    
    sum = recAdd(num);
    
    printf("%d",sum);
}

int recAdd(int num){
    
    if(num==0)
        return;
    else{
        return num+recAdd(num-1);
    }
    
}