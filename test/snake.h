#include <stdlib.h>
// Used for `rand` where it's needed
#include <stdint.h>

typedef struct {
        char head; // The char that's the snake's head
        uint8_t tail; // The direction and length of the tail (see `makeTail`)
} Snake;

Snake makeSnake();

char makeHead();

uint8_t makeTail();

void drawSnake(Snake s);
