/*
1. Generate a random number between 1 and 100.
2. Initialize a counter for the number of trials to 0.
3. Use a loop to continue prompting the player for guesses until they guess the correct number
or reach 10 trials.
4. Inside the loop, compare the player's guess to the random number and provide feedback
(e.g., "Too high," "Too low," or "Correct!").
5. Keep track of the number of guesses the player has made.
6. If the player guesses the correct number within 10 trials, display a congratulatory message
along with the number of guesses it took them.
7. If the player exceeds 10 trials without guessing correctly, display a message indicating that
they have run out of trials.
**********
Create an improved number guessing game where the program should also validate the player's
input to ensure it is a valid number between 1 and 100.
*/


#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<stdbool.h>

bool isValidNum(int num,int min,int max);

int readValidNum(char num[]);

void main(){

    int guess;
    char guessString[20];
    int randomInt=rand()%101; //random number between 0-100
    int trialsCounter=10;
     
    printf("Enter your guess of a number between 0 and 100\n");
    guess=readValidNum(guessString);
    trialsCounter--;
  
    for(; trialsCounter>0;trialsCounter--){
        if(guess==randomInt){
            printf("Correct!");
            break;
        }    
        else if(guess<randomInt){
            printf("Too Low\nPlease try again, you have %d trials left\n",trialsCounter);
            guess=readValidNum(guess);

        }
        else if(guess>randomInt){
            printf("Too High\nPlease try again, you have %d trials left\n",trialsCounter);
            guess=readValidNum(guess);      
        }
    }
    if(trialsCounter==0)
       printf("\nNo more trials left, you lose!");
} 

bool isValidNum(int num,int min,int max){

    if(num>=min && num <=max)
        return true;
    else return false;    
         
}

int readValidNum(char numStr[]){
    scanf("%s",&numStr);
    int num=atoi(numStr);
    if(!isValidNum(num,0,100)){
        printf("You Entered an invalid number that is not between 0 and 100, try again\n");
        return readValidNum(num);
    }
    else 
        return num;


}