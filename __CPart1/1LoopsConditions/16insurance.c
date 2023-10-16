/*
● Write a program that calculates and displays the deductible
taken by the insurance company for a given amount of
damage.
● The deductible is 10% of the damage, but it should not be
less than 10 euros nor more than 500 euros.
*/

#include<stdio.h>

int main(){
    
    float damageValue=300;
    float deductibleValue=0;
    
    deductibleValue = damageValue * 0.1 ; 
    
    if(deductibleValue<10){
        deductibleValue=10;    
        printf("Since calculated deductible is less than 10, adjusted deductible = %g euros", deductibleValue);
    }    
    else if(deductibleValue>500){
        deductibleValue=500;  
        printf("since calculated deductible is more than 500, adjusted deductible = %g euros", deductibleValue);
    }    
    else
    printf("The deductible is %g euros",deductibleValue);
    
    return 0;
    
}
    