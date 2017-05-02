CFLAGS = -O3
STD = c99

bmsrdecode: bmsrdecode.c
	gcc -o $@ $< $(CFLAGS) -std=$(STD) -I.
