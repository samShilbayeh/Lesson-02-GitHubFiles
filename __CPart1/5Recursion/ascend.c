/*
Write a recursive method: 
static void ascend(int n) 
That displays integers from 1 to n in ascending order.

Example: if n=5 -→ display  1 2 3 4 5
*/


#include<stdio.h>

void  ascend(int num);

int main(){
    int num=5;
    
     ascend(num);
    
}

void ascend(int num){
    
    if(num==0)
        return;
    else{
        ascend(num-1);
        printf("%d\t",num);
    }
    
}