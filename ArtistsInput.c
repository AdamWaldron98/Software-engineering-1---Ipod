#include <stdio.h>
#include <string.h>
#include "input.h"

//Define the function
int artistInput(char artists[][80], char songs[][3][80])
{
    int i, length;
    for(i = 0;i < 4;i++)
    {
        printf("\nPlease enter artist %d:\n", i+1);

        //User input required for the first artist
        fgets(artists[i], 80, stdin);

        //If the return command is pressed it exits
        if(artists[i][0]=='\n')
        {
            break;
        }

        //Remove the carriage return from the song
        length = strlen(artists[i]);
        artists[i][length -1] = '\0';

        //Call the function to enter the songs for each artist
        songsInput(artists, songs, i);
    }

    //Keep track of how many artists have been entered
    return (numOfArtists += i);
}
