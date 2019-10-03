#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include "input.h"

//Define the function
void ShuffleArtists(char artists[][80], char songs[][3][80], int numOfArtists)
{
    int i, j;
    char swap[80];

    srand(time(NULL));

    //Generate some random number
    for(i = 1;i < numOfArtists;i++)
    {
        //Assign the random number the value of j
        j = rand()%(i + 1);

        if(j != 1)
        {
            //Shuffle the artists
            memset(swap, '$', 80-2);
            swap[80-1] = '\0';
            strcpy(swap,artists[j]);
            strcpy(artists[j], artists[i]);
            strcpy(artists[i], swap);
        }
    }
}
