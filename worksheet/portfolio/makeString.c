
/*
Name: Saloni Pradhan
Student ID: 201829493
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main( int argc, char **argv ) {

    // define appropriate data to hold your answer 
    
    //char buffer[100];


    if (argc != 2) {
    printf("Usage: ./makeString buffer\n");
    return 1;
}


    char *input = argv[1];
    
    // process the command-line data using appropriate string functions

    size_t len = strlen(input);

    char *buffer = malloc(len + 1);

    if (buffer == NULL) {
        printf("End\n");
        return 1;
    }

    strcpy(buffer, input);

    for (size_t i = 0; i < len; i++) {
        if (buffer[i] == ' ') {
            buffer[i] = '-';
        }
    }
    printf("%s\n",buffer); // use only this single print statement in your submitted code


    free(buffer);
    return 0;
}