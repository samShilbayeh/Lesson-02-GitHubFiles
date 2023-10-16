/*
Write a function that returns for a provided income, the corresponding tax.
For the first 10000 euros, no tax
10% on the portion between 10000 and 30000
30% on the portion between 30000 and 60000
50% on the portion> 60000
*/
#include<stdio.h>

float taxCalculator(float totalIncome);  //function declaration

int main(){

    float totalIncome=16000;
    float totalTax=0;
    
     
    printf("Enter the total income in euros\n");
    scanf("%f",&totalIncome);
    
    totalTax= taxCalculator(totalIncome);

    printf("With the income of %g euros, the total tax = %g euros", totalIncome, totalTax);

    return 0;

}

float taxCalculator(float totalIncome){     //function definition  

    float totalTax=0;
    
    float incomeHolder=totalIncome; //used in the calculation of the accumulated tax
    
        
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

    return totalTax;
}