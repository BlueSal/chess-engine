#define U64 unsigned long long

/*
    These are the fundamental macros implemented by using
    bitwise operations:
    - get_bit() does an AND between the square and 1, so it chechs if the square is turned on
    - set_bit() uses a bitwise OR between the square and 1, so it sets it to 1
    - pop_bit() checks if the square is turned on, and if so, it uses a XOR to make it 0
*/
#define get_bit(bitboard, square) (bitboard & (1ULL << square))
#define set_bit(bitboard, square) (bitboard |= (1ULL << square))
#define pop_bit(bitboard, square) (get_bit(bitboard, square) ? bitboard ^= (1ULL << square) : 0)

/*
    Const numbers to represent some masks for the board
*/
#define not_a_file 18374403900871474942ULL
#define not_h_file 9187201950435737471ULL
#define not_first_rank 72057594037927935ULL
#define not_eighth_rank 18446744073709551360ULL


/*
    This enum is important to be able to call cells simply by name
    and not by their number
*/
enum squares{
    a8, b8, c8, d8, e8, f8, g8, h8,
    a7, b7, c7, d7, e7, f7, g7, h7,
    a6, b6, c6, d6, e6, f6, g6, h6,
    a5, b5, c5, d5, e5, f5, g5, h5,
    a4, b4, c4, d4, e4, f4, g4, h4,
    a3, b3, c3, d3, e3, f3, g3, h3,
    a2, b2, c2, d2, e2, f2, g2, h2,
    a1, b1, c1, d1, e1, f1, g1, h1
};

enum sides{
    white, black
};

void print_bitboard(U64 bitboard);