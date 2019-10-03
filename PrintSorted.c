#include <stdio.h>
#include "input.h"

//Function to print the artists
void PrintSorted(char artists[][80], int numOfArtists, int numSongsPerArtist[], char songs[][3][80])
{
    int i, j;

    for(i = 0; i < numOfArtists; i++)
    {
        /*The first artists is printed followed by the songs entered
        by that artists. The loop then returns to the first loop and
        then the second artists is printed followed by the songs
        entered for that artists and so on*/

        printf("\n\nArtist %d: %s\n", i+1, artists[i]);

        for(j = 0;j < numSongsPerArtist[i];j++)
        {
            printf("\nSong %d: %s", j+1, songs[i][j]);
        }
    }
}
