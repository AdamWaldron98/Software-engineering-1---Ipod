#include <stdio.h>
#include "input.h"

//Function to print the artists
void PrintShuffle(char artists[][80], int numOfArtists, int numSongsPerArtist[], char songs[][3][80])
{
    int i;
    int x;

    for(x = 0; x < numOfArtists; x++)
    {
        /*Shuffled list of songs is printed that is twice
        as large as the amunt of songs entered*/
        for(i = 0;i < (numSongsPerArtist[x]*2);i++)
        {
            printf("\n%s - %s\n", songs[x][i], artists[i]);
        }
    }
}
