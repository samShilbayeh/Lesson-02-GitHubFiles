/*
Write a recursive method: 
static void descend(int n) 
that displays integers from 1 to n in descending order.

Example: if n=5 -→ display  5 4 3 2 1
 
*/


#include<stdio.h>

void  descend(int num);

int main(){
    int num=5;
    
     descend(num);
    
}

void descend(int num){
    
    if(num==0)
        return;
    else {
        
        printf("%d\t",num);
        descend(num-1);       
    }
    
}