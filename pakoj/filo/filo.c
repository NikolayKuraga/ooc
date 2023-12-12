#include "fila_eno.h"


static
unsigned
metodoFasada(
	struct FilaTuto *tuto)
{
	printf(
		"Metodo fasada de klaso, kies identigilo estas '%s'.\n",
		KLASA_IDENTIGILO);
	tuto->heredo->metodoKasxa(tuto);

	return 0;
}

static
unsigned
metodoKasxa(
	struct FilaTuto *tuto)
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
	struct FilaTuto *tuto)
{
	printf(
		"Metodo ena de klaso, kies identigilo estas '%s'.\n",
		KLASA_IDENTIGILO);

	return 0;
}


struct FilaTuto *
FaruFilonTien(
	void *montrilo,
	unsigned NombroDeFiloj)
{
	struct FilaTuto *tuto = (struct FilaTuto *) montrilo;
	FaruObjektonTien((struct ObjektaTuto *) tuto, NombroDeFiloj + 1);

	tuto->eno = malloc(
		sizeof *tuto->eno +
		sizeof *tuto->heredo +
		sizeof *tuto->fasado);
	tuto->heredo = (struct FilaHeredo *) (tuto->eno + 1);
	tuto->fasado = (struct FilaFasado *) (tuto->heredo + 1);

	tuto->eno->metodoEna = metodoEna;
	tuto->eno->identigilo = KLASA_IDENTIGILO;

	tuto->heredo->metodoKasxa = metodoKasxa;

	tuto->fasado->metodoFasada = metodoFasada;

	return tuto;
}


struct FilaTuto *
FaruFilon()
{
	return FaruFilonTien(malloc(sizeof(struct FilaTuto)), 0);
}
