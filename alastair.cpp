#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
 
#define COMPUTER 1
#define HUMAN 2
 struct move
{
    int pile_index;
    int stones_removed;
};
void showPiles (int piles[], int n)
{
    int i;
    printf ("Current Game Status -> ");
    for (i=0; i<n; i++)
        printf ("%d ", piles[i]);
    printf("\n");
    return;
}
bool gameOver(int piles[], int n)
{
    int i;
    for (i=0; i<n; i++)
        if (piles[i]!=0)
            return (false);
 
    return (true);
}
void declareWinner(int whoseTurn)
{
    if (whoseTurn == COMPUTER)
        printf ("\nHUMAN won\n\n");
    else
        printf("\nCOMPUTER won\n\n");
    return;
}
int calculateNimSum(int piles[], int n)
{
    int i, nimsum = piles[0];
    for (i=1; i<n; i++)
        nimsum = nimsum ^ piles[i];
    return(nimsum);
}
void makeMove(int piles[], int n, struct move * moves)
{
    int i, nim_sum = calculateNimSum(piles, n);
    if (nim_sum != 0)
    {
        for (i=0; i<n; i++)
        {
            if ((piles[i] ^ nim_sum) < piles[i])
            {
                (*moves).pile_index = i;
                (*moves).stones_removed =
                                 piles[i]-(piles[i]^nim_sum);
                piles[i] = (piles[i] ^ nim_sum);
                break;
            }
        }
 }
    else
    {
       
        int non_zero_indices[n], count;
 
        for (i=0, count=0; i<n; i++)
            if (piles[i] > 0)
                non_zero_indices [count++] = i;
 
        (*moves).pile_index = (rand() % (count));
        (*moves).stones_removed =
                 1 + (rand() % (piles[(*moves).pile_index]));
        piles[(*moves).pile_index] =
         piles[(*moves).pile_index] - (*moves).stones_removed;
 
        if (piles[(*moves).pile_index] < 0)
            piles[(*moves).pile_index]=0;
    }
    return;
}
void playGame(int piles[], int n, int whoseTurn)
{
    printf("\nGAME STARTS\n\n");
    struct move moves;
 
    while (gameOver (piles, n) == false)
    {
        showPiles(piles, n);
 
        makeMove(piles, n, &moves);
 
        if (whoseTurn == COMPUTER)
        {
            printf("COMPUTER removes %d stones from pile "
                   "at index %d\n", moves.stones_removed,
                   moves.pile_index);
            whoseTurn = HUMAN;
        }
        else
        {
            printf("HUMAN removes %d stones from pile at "
                   "index %d\n", moves.stones_removed,
                   moves.pile_index);
            whoseTurn = COMPUTER;
        }
    }
 
    showPiles(piles, n);
    declareWinner(whoseTurn);
    return;
}
 
void knowWinnerBeforePlaying(int piles[], int n,
                             int whoseTurn)
{
    printf("Prediction before playing the game -> ");
 
    if (calculateNimSum(piles, n) !=0)
    {
        if (whoseTurn == COMPUTER)
            printf("COMPUTER will win\n");
        else
            printf("HUMAN will win\n");
    }
    else
    {
        if (whoseTurn == COMPUTER)
            printf("HUMAN will win\n");
        else
            printf("COMPUTER will win\n");
    }
 
    return;
}
int main()
{

    int piles[] = {3, 4, 5};
    int n = sizeof(piles)/sizeof(piles[0]);
 knowWinnerBeforePlaying(piles, n, COMPUTER);
     playGame(piles, n, COMPUTER);

   
 
    return(0);
}
