//C Program to define and initialize a 2 D Array called scores.
/*
//C Program to define and initialize a 2D Array called scores
Author: Adrian Mwangi 
Registration number: CT101/G/22872/24
Date:6/11/2024
//preprocessor directive - scanf(),printf()
*/
#include <stdio.h>

int main() {
    // Define and initialize the 2D array
    int scores[4][2] = {{65, 92},{84, 72},{35, 70},{59, 67}
    };

    // Use nested for loops to print the elements of the array
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 2; j++) {
            printf("scores[%d][%d] = %d\n", i, j, scores[i][j]);
        }
    }

    return 0;
}
    
