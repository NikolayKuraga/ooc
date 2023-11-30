#ifndef OBJEKTA_HEREDO_H
#define OBJEKTA_HEREDO_H


#include "objekta_fasado.h"


struct ObjektaFronto {

	struct ObjektaEno *eno;

	/* struct FrontoDeObjektaPatro fronto; */
};

struct ObjektaHeredo {

	struct ObjektaFasado fasado;

	unsigned
	(*metodoKasxa)(
		struct ObjektaFasado *mi);
};


extern
struct ObjektaFasado *
FaruObjektonTien(
	void *montrilo,
	unsigned const nombroDeIdoj);


#endif /* OBJEKTA_HEREDO_H */
