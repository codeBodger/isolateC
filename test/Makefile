COBJECTS = main.o
ICOBJECTS = snake.o

all: snake
snake: $(COBJECTS) $(ICOBJECTS)
	gcc -o snake $^

$(COBJECTS): $*.c
$(ICOBJECTS): $*.mk
%.o: *.h
	gcc -c $<

# Also makes the necessary C files
%.mk: %.ic *.h
	../icp $<
