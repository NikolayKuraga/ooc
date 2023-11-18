#ifndef FILO_ENA_H
#define FILO_ENA_H


/*
 * Cxi tiu cxapdosiero enhavas enajn partojn de la klaso.
 */


#include "filo_tuta.h"


/*
 * Strukturo de enaj partoj de la klaso.
 * Estas spaco por enaj kampoj.
 */
struct FiloEna {

	/* Ena kampo por metodo. */
	unsigned
	(*metodoEna)(
		struct Filo *memo);
};


#include <stdio.h>
#include <stdlib.h>


#endif /* FILO_ENA_H */
