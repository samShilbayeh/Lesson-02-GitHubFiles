/*
Create a recursive function to compute the power of n 
to the exponent p, where both n and p are given as inputs.
*/

#include<stdio.h>

float recPower(int n,int p);

void main(){
    int n=2;
    int p=-2; //power
    float result=0;
    
    result = recPower(n,p);
    printf("%d to the power %d = %g",n,p,result);
}

float recPower(int n,int p){
    
    if(p==0)
        return 1;
 //   if(p<0){                       // Negative power
  //    return ((1/n) * (recPower(1/n,p+1)));  
  //  }    
    else{
        return (n * recPower(n,p-1));
    }
    
}