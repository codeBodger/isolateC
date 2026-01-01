#include <stdlib.h>
#include <stdint.h>

typedef struct {
        char head;
        int8_t tail;
} Snake;

Snake makeSnake();

char makeHead();

int8_t makeTail();

void drawSnake(Snake s);
