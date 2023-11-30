#ifndef FILA_HEREDO_H
#define FILA_HEREDO_H


#include "fila_fasado.h"


struct FilaFronto {

	struct FilaEno *eno;

	struct ObjektaFronto fronto;
};

struct FilaHeredo {

	struct FilaFasado fasado;

	unsigned
	(*metodoKasxa)(
		struct FilaFasado *memo);
};


extern
struct FilaFasado *
FaruFiloTien(
	void *montrilo,
	unsigned const nombroDeIdoj);


#endif /* FILA_HEREDO_H */
