#ifndef OBJEKTA_FASADO_H
#define OBJEKTA_FASADO_H


/* #include "heredo_de_objekta_patro.h" */


extern
char const *const
ObjektaIdentigilo;


struct ObjektaFasado {

	/* struct HeredoDeObjektaPatro heredo; */

	unsigned
	(*metodoFasada)(
		struct ObjektaFasado *mi);

	unsigned
	(*estas)(
		struct ObjektaFasado *mi,
		char const *const identigilo);
};


extern
struct ObjektaFasado *
FaruObjekton();


#endif /* OBJEKTA_FASADO_H */
