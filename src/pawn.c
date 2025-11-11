#include "pawn.h"


/*
    This function takes a square - where there is a pawn - and
    the side that this pawn is a part of. It returns a U64 
    bitboard with only the squares the pawn can attack turned on
*/
U64 mask_pawn_attacks(int square, int side) {
    U64 attacks = 0ULL;
    
    if(side == white) {
        set_bit(attacks, square + 7);
        set_bit(attacks, square + 9);
    }

    else if (side == black) {
        set_bit(attacks, square - 7);
        set_bit(attacks, square - 9);
    }

    return attacks;
}