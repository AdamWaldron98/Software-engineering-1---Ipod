#include <stdio.h>
#include <string.h>
#include "input.h"

int main(void)
{
    //The array containing artists names
    char artists[4][80];

    //The array to store the songs for each artist
    char songs[4][3][80];

    /*
     * Use here functions that you should implement to insert artists and songs from the standard input.
     * Note that you also need to track the nkumber of artists and the number of songs for each artist.
     */

    //Welcome message
    printf("Welcome to shuffle, ");

    //Call the function to get the input for the artists
    artistInput(artists, songs);

    /*
     * Use here the function sortArtists to sort the array of the artists and sortSongs to sort the songs of each artist
     * Print each artist (alphabetically) and for each of them print the list of songs sorted alphabetically
     */

     //Call the functions to sort the artists and the songs
    SortArtists(artists, songs, numOfArtists);
    SortSongs(songs, numSongsPerArtist, numOfArtists);

    //Call the function to print the songs
    PrintSorted(artists, numOfArtists, numSongsPerArtist, songs);

     /*
     * Use here the function shuffleSongs to shuffle all the songs
     * Print the list of shuffled songs
     */

     //Call the function to shuffle the songs and artsts
    ShuffleArtists(artists, songs, numOfArtists);
    ShuffleSongs(songs, numSongsPerArtist, numOfArtists);

    //Call the function to print the shuffled songs
    PrintShuffle(artists, numOfArtists, numSongsPerArtist, songs);

    return 0;
}
