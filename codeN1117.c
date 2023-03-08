
/* This example asks the user for a height and width of an m X n game board with a maximum dimension of 100 squares.*/

#define MAX_DIM 100
#include <stdio.h>
#include <stdlib.h>

struct board_square_t {
   int height;
   int width;
};


int main(){
    /* board dimensions.*/
    int m,n, error;
    struct board_square_t *board;
    printf("Please specify the board height: \n");
    error = scanf("%d", &m);
    if ( EOF == error ){
        printf("No integer passed: Die evil hacker!\n");
    }
    printf("Please specify the board width: \n");
    error = scanf("%d", &n);
    if ( EOF == error ){
         printf("No integer passed: Die evil hacker!\n");
    }
    if ( m > MAX_DIM || n > MAX_DIM ) {
        printf("Value too large: Die evil hacker!\n");
    }
    board = (struct board_square_t*) malloc( m * n * sizeof(struct board_square_t));
    return 0;
}
