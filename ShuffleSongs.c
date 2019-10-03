#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include "input.h"

//Define the function
void ShuffleSongs(char songs[][3][80], int numSongsPerArtist[], int numOfArtists)
{
    int i, j,x;
    char swap[80];

    srand(time(NULL));

    for(x = 0;x < numOfArtists;x++)
    {
        for(j = 0;j < numOfArtists;j++)
        {
            //Generate some random number
            for(i = 1;i < numSongsPerArtist[j];i++)
            {
                //Assign the random number the value of j
                j = rand()%(i + 1);

                if(j != 1)
                {
                    //Shuffle the songs
                    memset(swap, '$', 80-2);
                    swap[80-1] = '\0';
                    strcpy(swap, songs[x][j]);
                    strcpy(songs[x][j], songs[x][i]);
                    strcpy(songs[x][i], swap);
                }
            }
        }
    }
}
