#ifndef SALUTO_H
#define SALUTO_H


#include <stdio.h>
#include <stdlib.h>


/** defauxlta konstruanto */
struct Saluto* Saluto();


/* funkcioj */

/** proceduro por akiri sekvan simbolon */
unsigned char donuSekvaChar(char* const);

/** tabelo de funkcioj */
struct Saluto {
	unsigned char (*donuSekvaChar)(char* const);
};


/** malplena objekto */
extern const struct Saluto salutoMalplena;


#endif /* SALUTO_H */
