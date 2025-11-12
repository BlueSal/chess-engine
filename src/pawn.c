#include "pawn.h"


/*
    This function takes a square - where there is a pawn - and
    the side that this pawn is a part of. It returns a U64 
    bitboard with only the squares the pawn can attack turned on
*/
U64 mask_pawn_attacks(int square, int side) {
    // bitboard of piece
    U64 piece = 0ULL;
    set_bit(piece, square);
    // bitboard of resulting attacks
    U64 attacks = 0ULL;
    
    // the &s are to prevent overflow when the pawn is near the sides
    // of the board
    if(side == white) {
        if(piece & not_eighth_rank) {
            if(piece & not_h_file)set_bit(attacks, square - 7);
            if(piece & not_a_file) set_bit(attacks, square - 9);
        }
    }

    else if (side == black) {
        if(piece & not_first_rank) {
            if(piece & not_a_file)set_bit(attacks, square + 7);
            if(piece & not_h_file)set_bit(attacks, square + 9);
        }
    }

    return attacks;
}