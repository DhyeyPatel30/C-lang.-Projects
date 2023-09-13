// ROCK, PAPER & SCISSOR
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int rockpaperscissor(char you, char comp);

int main()
{

    char you, comp;
    int num;

    srand(time(0)); // this generates random number.
    num = rand() % 100 + 1;
    if (num < 33) // these conditions generates random of rock, paper or scissor.
    {
        comp = 'r';
    }
    if (num > 33 && num < 66)
    {
        comp = 'p';
    }
    if (num > 66)

    {
        comp = 's';
    }


    printf("ROCK, PAPER OR SCISSOR.\n");

    printf("Enter rock, paper, or scissor : ");
    scanf("%c", &you);

    int result = rockpaperscissor(you, comp);

    printf("you chose %c and computer chose %c so, ", you, comp);

    if (result == 1)
    {
        printf("you won.!\n");
    }
    if (result == -1)
    {
        printf("you lose.!\n");
    }
    if (result == 0)
    {
        printf("game draw.!\n");
    }

    return 0;
}

int rockpaperscissor(char you, char comp)
{
    // returns 1 if you win, -1 if you lose, and 0 if draw.
    if (you == comp)
    {
        return 0;
    }
    if (you == 'r' && comp == 'p' || you == 'p' && comp == 's' || you == 's' && comp == 'r')
    {
        return -1;
    }
    // if (you == 'r' && comp == 's' || you == 'p' && comp == 'r' || you == 's' && comp == '')
    // {
    //     return 1;
    // }
    else
    {
        return 1;
    }
}
