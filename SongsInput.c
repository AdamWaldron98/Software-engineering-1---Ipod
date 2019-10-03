#include <stdio.h>
#include <string.h>
#include "input.h"

//Define the function
int songsInput(char artists[][80], char songs[][3][80], int i)
{
    int j,length;

    //We must get an input of songs for the artists
    for(j = 0; j < 3;j++)
    {
        printf("\nPlease insert Song %d for %s:\n", j+1, artists[i]);
        fgets(songs[i][j], 80 , stdin);

        //If the return command is pressed it exits
        if(songs[i][j][0]=='\n')
        {
            break;
        }

        //Remove the carriage return from the song
        length = strlen(songs[i][j]);
        songs[i][j][length -1] = '\0';
    }
    //We must keep track of how many songs have been entered
    return (numSongsPerArtist[i] += j);

}
