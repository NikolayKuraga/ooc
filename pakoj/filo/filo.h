#ifndef FILO_H
#define FILO_H


/*
 * Cxi tiu cxapdosiero enhavas publika partojn de la klaso.
 */


#include "objekto_tuta.h"


/*
 * Strukturo de publikaj kampoj de la klaso.
 */
struct Filo {

	struct ObjektoTuta patro; /* Objekto de patra klaso. */

	/* Publika kampo por metodo. */
	unsigned
	(*metodoPublika)(
		struct Filo *memo);
};


/*
 * Klasa faristo.
 * Estas funkcio por farigi objekton de la klaso.
 */
extern
struct Filo *
FaruFilon();


#endif /* FILO_H */
