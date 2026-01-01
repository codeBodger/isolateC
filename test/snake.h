#include <stdlib.h>
#include <stdint.h>

typedef struct {
        char head;
        uint8_t tail;
} Snake;

Snake makeSnake();

char makeHead();

uint8_t makeTail();

void drawSnake(Snake s);
