/*
Write a function that counts and returns the number of words in a provided string .

 (the words are separated by a space).
*/

#include<stdio.h>
#include<string.h>
#include<stdbool.h>

int wordsCounter(char myStr[40]);  //function declaration

void main(){
    
    char myStr[40] = "Random strings of strings.";
    
    printf("Enter a string");
    fgets(myStr,sizeof(myStr),stdin);
   
    printf("\n String \"%s\" has %d words",myStr, wordsCounter(myStr));
    
}

int wordsCounter(char myStr[]){     //function definition
    
    int wordsCounter=0;
    for(int i=0;myStr[i]!='\0';i++){
       if(myStr[i]== ' ')
            wordsCounter++;
   }
    wordsCounter++;  // for the last null terminated word 
        
    return wordsCounter;
    
}