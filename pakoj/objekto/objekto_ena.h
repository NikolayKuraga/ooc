#ifndef OBJEKTO_ENA_H
#define OBJEKTO_ENA_H


/*
 * Cxi tiu cxapdosiero enhavas enajn partojn de la klaso.
 */


#include "objekto_tuta.h"


/*
 * Strukturo de enaj partoj de la klaso.
 * Estas spaco por enaj kampoj.
 */
struct ObjektoEna {

	/* Ena kampo por metodo. */
	unsigned
	(*metodoEna)(
		struct Objekto *memo);
};


#include <stdio.h>
#include <stdlib.h>


#endif /* OBJEKTO_ENA_H */
