#ifndef FILA_ENO_H
#define FILA_ENO_H


#include "fila_heredo.h"


struct FilaTuto {

	struct FilaFronto fronto;

	struct FilaHeredo heredo;

} FilaTutoNula = {0};

struct FilaEno {

	char const *nomo;

	unsigned
	(*metodoEna)(
		struct FilaFasado *memo);
};


#include <stdio.h>
#include <stdlib.h>


#endif /* FILA_ENO_H */
