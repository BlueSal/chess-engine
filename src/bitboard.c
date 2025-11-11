#include "bitboard.h"
#include <stdio.h>

/*
    This function takes one bitboard as an input and prints it
    according to ranks and files. The square printed on the top-left
    is the first (index 0), and least significant and the one
    on the bottom-right (index 63), is the most significant square.
    It prints 1 if the square is full and 0 otherwise
*/
void print_bitboard(U64 bitboard) {
       printf("\n");
    for(int rank = 0; rank < 8; rank++) {
        for(int file = 0; file < 8; file++) {
            // converts file and rank to square index
            if(file == 0) {
                printf(" %d   ", 8 - rank);
            }
            int square = rank * 8 + file;
            printf(" %d ", get_bit(bitboard, square) ? 1 : 0);
        }
        printf("\n");
    }
    printf("\n");
    printf("      a  b  c  d  e  f  g  h\n");
    printf("Bitboard value: %llu\n", bitboard);
}