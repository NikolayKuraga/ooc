#ifndef FILO_TUTA_H
#define FILO_TUTA_H


/*
 * Cxi tiu cxapdosiero enhavas cxiuj partojn de la klaso (ne cxiam
 * senpere).
 */


#include "filo.h"


/*
 * Strukturo tuta de la klaso.
 * Estas spaco por substrukturo de publikaj kampoj komence, kasxa kampoj
 * meze, montrilo al strukturo de enaj kampoj fine. Cxi tiu strukturo
 * devas esti uzata kiel patro por heredanta klaso.
 */
struct FiloTuta {

	struct Filo filo; /* Publikaj kampoj. */

	/* Kasxa kampo por metodo. */
	unsigned
	(*metodoKasxa)(
		struct Filo *memo);

	void *ena; /* Montrilo al enaj kampoj. */
};


/*
 * Klasa faristo.
 * Estas funkcio por farigi objekton de la klaso. Asignas memoro por nur
 * enaj objektaj partoj; montrilo al tuta parto prenigxas kiel argumento.
 * Tamen cxiuj kampoj initas inkluzive publikaj kaj kasxaj. Cxi tiu
 * faristo devas esti uzata en heredanta klasa faristo.
 */
extern
struct FiloTuta *
FaruFilonParte(
	struct FiloTuta *memo);


#endif /* FILO_TUTA_H */
