#ifndef FILA_HEREDO_H
#define FILA_HEREDO_H


#include "fasado.h"
#include "objekto/heredo.h"


struct FilaHeredo {

	unsigned
	(*metodoKasxa)(
		struct FilaTuto *mi);
};


struct FilaTuto *
FaruFilonTien(
	void *montrilo,
	unsigned NombroDeFiloj);


#endif /* FILA_HEREDO_H */
