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
*/


#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void main(){

    int guess;
    int randomInt=rand()%101; //random number between 0-100
    int i=10;
     
    printf("Enter your Guess of a number between 0 1nd 100\n");
    scanf("%d",&guess); 
    i--;
    for(; i>0;i--){
        if(guess==randomInt){
            printf("Correct!");
            break;
        }    
        else if(guess<randomInt){
            printf("Too Low\nPlease try again, you have %d trials left\n",i);
            scanf("%d", &guess);
        }
        else if(guess>randomInt){
            printf("Too High\nPlease try again, you have %d trials left\n",i);
            scanf("%d", &guess);       
        }
    }
    if(i==0)
       printf("\nNo more trials left, you lose!");
}       