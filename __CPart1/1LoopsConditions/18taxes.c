/*
● Write a program that calculates and displays the
corresponding tax for a provided income based on the
following rules:
– No tax for the first 10,000 euros of income.
– 10% tax on the portion of income between 10,000 and
30,000 euros.
– 30% tax on the portion of income between 30,000 and
60,000 euros.
– 50% tax on the portion of income exceeding 60,000 euros.
*/
#include<stdio.h>

int main(){

    float totalIncome=16000;
    float totalTax=0;
    
    float incomeHolder=totalIncome; //used in the calculation of the accumulated tax
    
   printf("Enter the total income in euros\n");
   scanf("%f",&totalIncome);
    
    if(totalIncome>60000){
        totalTax+= (totalIncome-60000)*0.5;
        incomeHolder=60000;
    }
    
    if(incomeHolder>30000){
        totalTax+= (incomeHolder-30000)*0.3;
        incomeHolder=30000;    
    }
    
    if(incomeHolder>10000){
        totalTax+= (incomeHolder-10000)*0.1;
        incomeHolder=10000;    
    }
    
    printf("With the income of %g euros, the total tax = %g euros", totalIncome, totalTax);

    return 0;

}