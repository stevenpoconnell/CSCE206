#include <stdio.h>

int main()
{
    int N = 0, k = 0, M = 0;
    printf("Input the number of players (N), the starting player (k), and the value for M: \n");
    scanf("%d, %d, %d", &N, &k, &M);
    char game[N];
    int say = 1;
    int i = 0;
    int person = k - 1;
    
    for(i = 0; i < N; i++)
    {
        game[i] = i + 1;
    }
    for(i = 0; i < (N - 1); i++)
    {
        while(say < M)
        {
            if(person == N - 1)
                person = 0;
            else
                person ++;
            if(game[person] != 0)
            {
                say ++;
            }
        }
        printf("\nItteration: %d \n", i + 1);
        printf("Removing the player sitting on the chair labeled: %d \n", game[person]);
        printf("Remaining players are: \n");
        
        game[person] = 0;
        say = 0;
        int q;
        for(q = 0; q < N; q++)
        {
            if(game[person] != 0)
            {
                printf("A player sitting on the chair labeled: %d \n", game[person]);
            }
            if(person == N - 1)
                person = 0;
            else
                person ++;
        }
        printf("Total Remaining players: %d \n\n", N - (i + 1));
    }
    int winner;
    for(i = 0; i < N; i++)
    {
        if(game[i] != 0)
        {
            winner = game[i];
        }
    }
    printf("The winner is sitting in chair %i\n\n", winner);
    
}
