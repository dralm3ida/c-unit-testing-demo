CC      = gcc
RM      = rm -f
CFLAGS  = -g


default: clean all

all: demo

demo: src/main.c src/Demo.c src/PrimeNumbers.c
	$(CC) $(CFLAGS) -o bin/demo src/main.c src/Demo.c src/PrimeNumbers.c

clean:
	$(RM) bin/demo