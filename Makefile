## Makefile for hman

# Basic configuration
CC=gcc
CFLAGS=-std=c99 -O2 -Wall
LFLAGS=-s
SRCDIR=src
OBJDIR=obj
LIBDIR=.
BIN=hman

# Dependencies
OBJS=hman.o

# Formatting work
_OBJS=$(patsubst %,$(OBJDIR)/%,$(OBJS))

# Start of instructions
make: $(_OBJS)
	$(CC) $(LFLAGS) -o $(BIN) $(_OBJS)

$(OBJDIR)/%.o: $(SRCDIR)/%.c
	$(CC) $(CFLAGS) -I$(LIBDIR) -c -o $@ $< 

clean:
	rm -f $(OBJDIR)/*.o