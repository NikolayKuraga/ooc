CC=cc

ARGS=-std=c89 -pedantic -Wshadow -Wall -Wextra -Werror -Wno-unused-parameter -Wno-unused-variable


all: saluto.run

saluto.run: main.o saluto.o tabelo_de_charoj.o
	$(CC) main.o saluto.o tabelo_de_charoj.o -o saluto.run

main.o: main.c
	$(CC) $(ARGS) -c main.c -o main.o

saluto.o: saluto.c saluto.h
	$(CC) $(ARGS) -c saluto.c -o saluto.o

tabelo_de_charoj.o: tabelo_de_charoj.c tabelo_de_charoj.h
	$(CC) $(ARGS) -c tabelo_de_charoj.c -o tabelo_de_charoj.o

clean:
	$(RM) *.o *.run
