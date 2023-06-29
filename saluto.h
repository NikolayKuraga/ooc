#ifndef SALUTO_H
#define SALUTO_H

#include <stdio.h>
#include <stdlib.h>

struct Saluto* faruSaluto();
unsigned char donuSekvaChar(char* const);

struct Saluto {
	unsigned char (*donuSekvaChar)(char* const);
};

extern const struct Saluto salutoMalplena;

#endif /* SALUTO_H */
