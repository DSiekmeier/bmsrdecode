CFLAGS = -Wall -Wextra -Wshadow
OPT = -O3
STD = c99

bmsrdecode: bmsrdecode.c
	gcc -o $@ $< $(CFLAGS) $(OPT) -std=$(STD) -I.
