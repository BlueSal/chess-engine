#include <stdio.h>
#include "bitboard.h"
#include "pawn.h"

int main(void) {

    U64 bitboard = 0ULL;
    set_bit(bitboard, a1);
    U64 pawn_attacks[2][64];
    print_bitboard(bitboard);

    U64 a = 0ULL;
    a = mask_pawn_attacks(h1, black);
    
    print_bitboard(a);
    
    return 0;
}