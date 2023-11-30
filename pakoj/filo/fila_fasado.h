#ifndef FILA_FASADO_H
#define FILA_FASADO_H


#include "objekta_heredo.h"


extern
char const *const
FilaIdentigilo;


struct FilaFasado {

	struct ObjektaHeredo heredo;

	unsigned
	(*metodoFasada)(
		struct FilaFasado *mi);
};


extern
struct FilaFasado *
FaruFilon();


#endif /* FILA_FASADO_H */
