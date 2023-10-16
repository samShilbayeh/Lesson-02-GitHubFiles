/*
Create a function add(int a, int b) which computes a + b
*/

#include<stdio.h>

int add(int a, int b){
    return (a+b);
        
}

int main(void){
    int a=4, b=6;
    
    printf("%d + %d = %d", a,b,add(a,b));
    
} 