#ifndef T_PIECE_H
#define T_PIECE_H

#include "block.h"

class Block;

class TPiece : public Block
{
public:
    static constexpr BLOCK_COLOR color = COLOR_MAGENTA;
    TPiece();
};

#endif