/*
● Write a program that displays the mention of a student based
on his average. The results are:
– 'Failed' if the average is less than 10
– 'Fairly good' if the average is between 12 and 14 (not included)
– 'Good' if the average is between 14 and 16 (not included)
– 'Very good' if the average is between 16 and 20 (included)
– '-' for any other value"
*/

#include<stdio.h>

int main(){
    
    int avg=6;
    
    if(avg < 10 )
        printf("Failed");
    else if(avg>=12 && avg <14)     
        printf("Fairly good");
    else if(avg>=14 && avg <16)     
        printf("Good");
     else if(avg>=16 && avg <=20)     
        printf("Very good");   
       else     
     printf("-");
}