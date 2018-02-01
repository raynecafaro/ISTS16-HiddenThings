CC=cc

o: o.c
	$(CC) -static $< -o $@
