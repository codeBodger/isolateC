TARGET = snake
COBJECTS = main.o
ICOBJECTS =
ICCLEANS =
ICMAKES = snake.mk

include $(ICMAKES)

all: $(TARGET)
$(TARGET): $(COBJECTS) $(ICOBJECTS)
	gcc -o $@ $^

$(COBJECTS): $*.c *.h
	gcc -c $<

# Also makes the necessary C files
%.mk: %.ic *.h
	../icp $<

clean: $(ICCLEANS)
	-rm -f $(TARGET) $(COBJECTS) $(ICOBJECTS) $(ICMAKES)
