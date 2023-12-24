#include "eno.h"


static
unsigned
estas(
	struct ObjektaTuto *tuto,
	char const *const identigilo)
{
	struct ObjektaTuto *i = NULL;
	struct ObjektaTuto *limo = tuto + tuto->eno->nombroDeFiloj + 1;

	for (i = tuto; i < limo; ++i) {
		if (!strcmp(i->eno->identigilo, identigilo)) {
			return 1;
		}
	}
	return 0;
}

static
unsigned
metodoKasxa(
	struct ObjektaTuto *tuto)
{
	printf(
		"Metodo kasxa de klaso, kies identigilo estas '%s'.\n",
		KLASA_IDENTIGILO);
	tuto->eno->metodoEna(tuto);

	return 0;
}

static
unsigned
metodoEna(
	struct ObjektaTuto *tuto)
{
	printf(
		"Metodo ena de klaso, kies identigilo estas '%s'.\n",
		KLASA_IDENTIGILO);

	return 0;
}


struct ObjektaTuto *
FaruObjektonTien(
	void *montrilo,
	unsigned nombroDeFiloj)
{
	struct ObjektaTuto *tuto = (struct ObjektaTuto *) montrilo;
	/* FaruObjektanPatronTien(); */

	tuto->eno = malloc(
		sizeof *tuto->eno +
		sizeof *tuto->heredo +
		sizeof *tuto->fasado);
	tuto->heredo = (struct ObjektaHeredo *) (tuto->eno + 1);
	tuto->fasado = (struct ObjektaFasado *) (tuto->heredo + 1);

	tuto->eno->metodoEna = metodoEna;
	tuto->eno->identigilo = KLASA_IDENTIGILO;
	tuto->eno->nombroDeFiloj = nombroDeFiloj;

	tuto->heredo->metodoKasxa = metodoKasxa;

	tuto->fasado->estas = estas;

	return tuto;
}


struct ObjektaTuto *
FaruObjekton()
{
	return FaruObjektonTien(malloc(sizeof(struct ObjektaTuto)), 0);
}
