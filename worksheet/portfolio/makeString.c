
/*
Name: Saloni Pradhan
Student ID: 201829493
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main( int argc, char **argv ) {

    // define appropriate data to hold your answer 
    
    size_t len = 0;

    for (int i = 1; i < argc; i++) {
        len += strlen(argv[i]);
    }

    len += (argc - 2);

    char *input = argv[1];
    
    // process the command-line data using appropriate string functions

    //size_t len = strlen(input);

    char *buffer = malloc(len + 1);
    
    buffer[0] = '\0';

    for (int i = 1; i < argc; i++) {
        strcat(buffer, argv[i]);

        if (i < argc - 1) {
            strcat(buffer, "-");
        }
    }

    printf("%s\n", buffer); // use only this single print statement in your submitted code


    free(buffer);
    return 0;
}

