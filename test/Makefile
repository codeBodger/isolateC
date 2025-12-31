all: snake
snake: *.o
	gcc -o snake $^

*.o: $*.c *.h
	gcc -c $*.c

snake_*.c: snake.ic
	../icp $^
