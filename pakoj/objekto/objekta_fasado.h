#ifndef OBJEKTA_FASADO_H
#define OBJEKTA_FASADO_H


#include "objekta_tuto.h"


struct ObjektaFasado {

	unsigned
	(*estas)(
		struct ObjektaTuto *mi,
		char const *const identigilo);
};


#endif /* OBJEKTA_FASADO_H */
