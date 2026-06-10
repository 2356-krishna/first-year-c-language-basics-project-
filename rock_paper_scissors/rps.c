 #include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
srand(time(0));
    int user, comp, round, comp_winnings = 0, user_winnings = 0;
    printf("WELCOME TO THE ROCK PAPER SCISSORS GAME \n");
    printf("ENTER ROUNDS YOU WANT TO PLAY\n");
    scanf("%d", &round);

    for (int i = 1; i <=round; i++)
     { 
        printf(" ROUND  %d\n",i);
        comp = (rand()%3)+1;
       printf("rule: 1 = rock 2 = paper 3=scissors\n");
       printf("USER CHOICE = ");
        scanf("%d", &user);
        printf("comp choice = %d\n",comp);
        if (user == comp)
        {
            
            printf("it's a draw\n");
        }

          else if ((user == 1 && comp== 3) ||
                   (user== 2 && comp == 1) ||
                   (user == 3 && comp == 2))
        {
            printf("user wins\n");
            
        }

        else
        {
            printf("computer  wins\n");

           
        }

    }
    printf("GAME HAS OVER ! , THANK YOU FOR PLAYING THE GAME\n");
   

    return 0;
}











