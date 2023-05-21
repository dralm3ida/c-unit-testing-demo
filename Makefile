CC      = gcc
RM      = rm -f
CFLAGS  = -I$(SRCDIR) \
          -g


default: clean all

all: demo

demo: src/main.c src/Demo.c
	$(CC) $(CFLAGS) -o bin/demo src/main.c src/Demo.c

clean:
	$(RM) $(BINDIR)/demo