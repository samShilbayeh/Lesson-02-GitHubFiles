/*
Write a recursive method: 
static void bounce(int n) 
That produces the same result as 'descend' and 'ascend' but without using the 'ascend' and 'descend' functions

Example: bounce(5) -→ 5 4 3 2 1 1 2 3 4 5
*/
#include<stdio.h>

void  bounce(int num);

int main(){
    int num=5;
    
     bounce(num);
    
}

void bounce(int num){
    
    if(num==0)
        return;
    else{
        printf("%d\t",num);
        bounce(num-1);
        printf("%d\t",num);
    }
    
}