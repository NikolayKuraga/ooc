#include "objekto_ena.h"


/*
 * Cxi tiu tradukunuo enhavas efektivajxo de klasaj kampoj.
 */


static
unsigned
metodoPublika(
	struct Objekto *memo)
{
	puts("Objekta metodo publika");
	((struct ObjektoTuta *) memo)->metodoKasxa(memo);
	return 0;
}

static
unsigned
metodoKasxa(
	struct Objekto *memo)
{
	puts("Objekta metodo kasxa");
	((struct ObjektoEna *) ((struct ObjektoTuta *) memo)->ena)->
		metodoEna(memo);
	return 0;
}

static
unsigned
metodoEna(
	struct Objekto *memo)
{
	puts("Objekta metodo ena");
	return 0;
}


struct ObjektoTuta *
FaruObjektonParte(
	struct ObjektoTuta *memo)
{
	memo->ena = calloc(1, sizeof(struct ObjektoEna));
	if (memo->ena == NULL) { return NULL; }

	((struct Objekto *) memo)->metodoPublika = metodoPublika;
	memo->metodoKasxa = metodoKasxa;
	((struct ObjektoEna *) memo->ena)->metodoEna = metodoEna;

	return memo;
}

struct Objekto *
FaruObjekton()
{
	struct ObjektoTuta *memo = calloc(1, sizeof(struct ObjektoTuta));
	if (memo == NULL) { return NULL; }

	return (struct Objekto *) FaruObjektonParte(memo);
}
