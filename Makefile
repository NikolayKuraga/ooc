CC=cc

ARGS=-std=c89 -Wall -Wextra -Wno-unused-parameter -Wno-unused-variable


all: saluto.run

saluto.run: main.o saluto.o
	$(CC) main.o saluto.o -o saluto.run

main.o: main.c
	$(CC) $(ARGS) -c main.c -o main.o

saluto.o: saluto.c saluto.h
	$(CC) $(ARGS) -c saluto.c -o saluto.o

clean:
	$(RM) *.o *.run
