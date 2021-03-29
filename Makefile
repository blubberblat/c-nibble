
lib:
	gcc -c src/ops.c -o operations.o
	ar rcs -o bin/libnibble.lib src/operations.o