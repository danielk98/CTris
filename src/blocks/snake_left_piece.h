#ifndef SNAKE_LEFT_PIECE_H
#define SNAKE_LEFT_PIECE_H

#include "block.h"

class Block;

class SnakeLeftPiece : public Block
{
public:
    static constexpr BLOCK_COLOR color = COLOR_GREEN;
    SnakeLeftPiece();
};

#endif