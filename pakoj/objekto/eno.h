#ifndef OBJEKTA_ENO_H
#define OBJEKTA_ENO_H


#include "heredo.h"


struct ObjektaEno {

	char const *identigilo;
	unsigned nombroDeFiloj;

	unsigned
	(*metodoEna)(
		struct ObjektaTuto *mi);
};


#include <stdio.h>
#include <stdlib.h>
#include <string.h>


#define KLASA_IDENTIGILO "Objekto"


#endif /* OBJEKTA_ENO_H */
