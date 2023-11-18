#ifndef OBJEKTO_H
#define OBJEKTO_H


/*
 * Cxi tiu cxapdosiero enhavas publika partojn de la klaso.
 */


/*
 * Strukturo de publikaj kampoj de la klaso.
 */
struct Objekto {

	/* Publika kampo por metodo. */
	unsigned
	(*metodoPublika)(
		struct Objekto *memo);
};


/*
 * Klasa faristo.
 * Estas funkcio por farigi objekton de la klaso. Asignas memoro por cxiam
 * objektaj partoj.
 */
extern
struct Objekto *
FaruObjekton();


#endif /* OBJEKTO_H */
