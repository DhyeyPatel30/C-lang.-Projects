// NUMBER GUESSING GAME.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int num, g, ng;
    srand(time(0));//this code generates random number 
    num = rand() % 100 + 1;//this code generates random number 

    do
    {
        printf("Guess a number between 1 to 100.\n");
        scanf("%d", &g);
        if (num > g)
        {
            printf("guess higher number please.\n");
        }
        else if (num < g)
        {
            printf("guess lower number please.\n");
        }
        else
        {
            printf("congratulations, you guessed it in %d guesses.\n", ng);
        }
        ng++;
    } while (g != num);

    return 0;
}
