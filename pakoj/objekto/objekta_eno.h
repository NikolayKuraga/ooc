#ifndef OBJEKTA_ENO_H
#define OBJEKTA_ENO_H


#include "objekta_heredo.h"


struct ObjektaTuto {

	struct ObjektaFronto fronto;

	struct ObjektaHeredo heredo;

} ObjektaTutoNula = {0};

struct ObjektaEno {

	char const *nomo;

	unsigned nombroDeIdoj;

	unsigned
	(*metodoEna)(
		struct ObjektaFasado *mi);
};


#include <stdio.h>
#include <stdlib.h>
#include <string.h>


#endif /* OBJEKTA_ENO_H */
