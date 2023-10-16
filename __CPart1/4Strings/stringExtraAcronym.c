/*
Write a program that given a sentence, display the corresponding acronym.
An acronym of a sentence is composed from the first letter of each of its 
words in uppercase.
Example: If the sentence is '' java developement kit '', the program 
display '' JDK '
*/

#include<stdio.h>
#include<string.h>
#include<ctype.h>



void main(){
    
    char myStr[40] = "Random company name r corporation";
    char acronym[40];
    
    int acronymIndex=1;
    
    //  printf("Enter a string");
    //fgets(myStr,sizeof(myStr),stdin);
    
    acronym[0]=toupper( myStr[0]);  
    
    for(int i=0;myStr[i]!='\0';i++){
        if(myStr[i]== ' '){
            acronym[acronymIndex]=toupper (myStr[i+1]);
            acronymIndex++;
        }
                    
    }
   
    acronym[acronymIndex]='\0'; // adding null to te end of the string after constructing it
    
   
    printf("\n String \"%s\" has an acronym \"%s\" ",myStr,acronym);
    
}
