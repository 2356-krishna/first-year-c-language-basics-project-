#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    
    
    
    srand(time(0));
    int random = (rand()%100)+1;
    int n;
    int no_of_guesses;
    printf("%d",random);
    
     for (no_of_guesses = 1; 2 < 3 ; no_of_guesses++)
     {
        printf("Guess random numbers between 1-100 = ");
        scanf("%d",&n);
        if(n==random)
        {
            printf("CONGRATS! ,YOU GUESS THE CORRECT NUMBER \n");
            break;
        }
        else if(n<random)
        {
            printf("You guess the lowest try higher number to win \n");
        }
        else if(n>random)
        {
            printf("You guess the highest number try lowest number to win \n");
        }
     }
    printf("You Guessed %d times to win",no_of_guesses);

     
     return 0;
}