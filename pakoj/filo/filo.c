#include "filo_ena.h"


/*
 * Cxi tiu tradukunuo enhavas efektivajxo de klasaj kampoj
 */


static
unsigned
metodoPublika(
	struct Filo *memo)
{
	puts("Fila metodo publika");
	((struct FiloTuta *) memo)->metodoKasxa(memo);
	return 0;
}

static
unsigned
metodoKasxa(
	struct Filo *memo)
{
	puts("Fila metodo kasxa");
	((struct FiloEna *) ((struct FiloTuta *) memo)->ena)->metodoEna(memo);
	return 0;
}

static
unsigned
metodoEna(
	struct Filo *memo)
{
	puts("Fila metodo ena");
	return 0;
}


struct FiloTuta *
FaruFilonParte(
	struct FiloTuta *memo)
{
	memo = (struct FiloTuta *) FaruObjektonParte((struct ObjektoTuta *) memo);
	if (memo == NULL) { return NULL; }

	memo->ena = calloc(1, sizeof(struct FiloEna));
	if (memo->ena == NULL) { return NULL; }

	((struct Filo *) memo)->metodoPublika = metodoPublika;
	memo->metodoKasxa = metodoKasxa;
	((struct FiloEna *) memo->ena)->metodoEna = metodoEna;

	return memo;
}

struct Filo *
FaruFilon()
{
	struct FiloTuta *memo = calloc(1, sizeof(struct FiloTuta));
	if (memo == NULL) { return NULL; }

	return (struct Filo *) FaruFilonParte(memo);
}
