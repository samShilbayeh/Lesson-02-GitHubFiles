/*
● Write a program for congratulating a student based on his
gender and his average. It displays:
– 'Congratulations young man :-)' if it is a man with an
average greater than 10.
– 'Congratulations Miss :-)' if it is a woman with an average
greater than 10.
– ':-(' if the average is less than 10."
*/

#include<stdio.h>

int main(){
    
    char gender='M'; // m: male; f: female
    int avg=14;
    
    if((gender == 'm' || gender == 'M') && avg>=10)
        printf("Congratulations young man :-)");
    else if((gender == 'f' || gender =='F') && avg>=10)     
        printf("Congratulations Miss :-)");
    else    
     printf(":-(");
}