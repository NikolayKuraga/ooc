#ifndef OBJEKTA_HEREDO_H
#define OBJEKTA_HEREDO_H


#include "objekta_fasado.h"
/* #include "heredo_de_objekta_patro.h" */


struct ObjektaHeredo {

	unsigned
	(*metodoKasxa)(
		struct ObjektaTuto *mi);
};


struct ObjektaTuto *
FaruObjektonTien(
	void *montrilo,
	unsigned NombroDeFiloj);


#endif /* OBJEKTA_HEREDO_H */
