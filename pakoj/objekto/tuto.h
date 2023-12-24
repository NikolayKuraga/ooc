#ifndef OBJEKTA_TUTO_H
#define OBJEKTA_TUTO_H


/* #include "tuto_de_objekta_patro.h" */


struct ObejktaEno;
struct ObjektaHeredo;
struct ObjektaFasado;


struct ObjektaTuto {

	/* struct TutoDeObjektaPatro patro; */

	struct ObjektaEno *eno;

	struct ObjektaHeredo *heredo;

	struct ObjektaFasado *fasado;
};


struct ObjektaTuto *
FaruObjekton();


#endif /* OBJEKTA_TUTO_H */
