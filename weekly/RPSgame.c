/*program a rock and scissors game and let
the player play it three times  take players name as input, log scores and
declare the winner
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int greater(char c1, char c2)
{
    if (c1 == c2)
    {
        return -1;
    }

    if (c1 == 'r' && c2 == 's')
    {
        return 1;
    }
    else
    {
        return 0;
    }
    if (c1 == 's' && c2 == 'p')
    {
        return 1;
    }
    else
    {
        return 0;
    }
    if (c1 == 'p' && c2 == 'r')
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int i = 0, start, playerchar, compchar;
    char dirct[4] = {'r', 'p', 's'};
    char name[20];

    printf("\n\n WELCOME TO ROCK PAPER AND SCISSORS GAME\n\n ");

    printf(" press [1] to start the game \n press [2] to quit\n");
    scanf("%d", &start);
    if (start == 1)
    {

        printf("enter your name\n");
        getchar();
        gets(name);
        printf("\n you  entered : ");
        puts(name);
        printf(" you will get 3 chances \n best of luck ;)\n");
        // personal info of player
        while (i <= 3)
        {
            int move;
            printf(" choose your move\n");
            printf(" [1]stone   [2]scissors [3]paper \n");
            scanf("%d", &move);
            playerchar = dirct[move - 1];
            printf(" the player choose :%c\n", playerchar);

            //  genrating computer moves
            srand(time(NULL));

            compchar = dirct[rand() % 3];
            printf(" the computer choose :%c\n", compchar);

            // decide whos wins
            int compscore, playerscore;
            if (greater(compchar, playerchar) == 1)
            {
                compscore += 1;
            }
            else if (greater(compchar, playerchar) == -1)
            {
                compscore += 1;
                playerscore += 1;
            }

            else
            {
                playerscore += 1;
            }
            if (playerscore > compscore)
            {
                printf(" you won\n");
            }
            else if (playerscore = compscore)
            {

                printf(" its a tie \n");
                
            }

            else
            {
                printf("the computer won\n");
            }
        }
    }

    return 0;
}
