#ifndef FILA_ENO_H
#define FILA_ENO_H


#include "fila_heredo.h"


struct FilaEno {

	char const *identigilo;

	unsigned
	(*metodoEna)(
		struct FilaTuto *mi);
};


#include <stdio.h>
#include <stdlib.h>


#define KLASA_IDENTIGILO "Filo"


#endif /* FILA_ENO_H */
