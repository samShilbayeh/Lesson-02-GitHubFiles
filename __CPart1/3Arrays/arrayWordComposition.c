/*
Write a program that displays the word resulting 
from the concatenation of the charaters of a char array.
*/
#include<stdio.h>

void main(){
    
    char charArray[]  = {'S','a','m'};
    
    for(int i=0; i<sizeof(charArray)/sizeof(charArray[0]); i++)
        printf("%c",charArray[i]);
    
   // int i=0;
//    while(charS[i]!='\0'){
  //      printf("%c",charS[i]);
       // printf("%d",i);
//        i++;
 //   }
    
    
    
}