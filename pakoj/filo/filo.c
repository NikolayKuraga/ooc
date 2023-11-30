#include "fila_eno.h"


char const *const
FilaIdentigilo = "Filo";


static
unsigned
metodoFasada(
	struct FilaFasado *fasado)
{
	struct FilaHeredo *heredo = (struct FilaHeredo *) fasado;

	puts("Metodo fasada de klaso Filo.");
	heredo->metodoKasxa(fasado);

	return 0;
}

static
unsigned
metodoKasxa(
	struct FilaFasado *fasado)
{
	struct FilaEno *eno = (
		(struct FilaFronto *)
		((char *) fasado - sizeof(struct FilaFronto))
	)->eno;

	puts("Metodo kasxa de klaso Filo.");
	eno->metodoEna(fasado);

	return 0;
}

static
unsigned
metodoEna(
	struct FilaFasado *fasado)
{
	puts("Metodo ena de klaso Filo.");
	return 0;
}


struct FilaFasado *
FaruFilonTien(
	void *montrilo,
	unsigned const nombroDeIdoj)
{
	struct FilaTuto *tuto = (struct FilaTuto *) montrilo;
	void *tutoPatra =
		(char *) tuto +
		sizeof(tuto->fronto) -
		sizeof(tuto->fronto.fronto);

	FaruObjektonTien(tutoPatra, nombroDeIdoj + 1);

	tuto->fronto.eno = calloc(1, sizeof(struct FilaEno));
	tuto->fronto.eno->nomo = FilaIdentigilo;

	tuto->heredo.fasado.metodoFasada = &metodoFasada;
	tuto->heredo.metodoKasxa = &metodoKasxa;
	tuto->fronto.eno->metodoEna = &metodoEna;

	return (struct FilaFasado *)
		((char *) tuto + sizeof(struct FilaFronto));
}

struct FilaFasado *
FaruFilon()
{
	struct FilaTuto *tuto = calloc(1, sizeof(struct FilaTuto));

	if (tuto == NULL) { return NULL; }
	FaruFilonTien(tuto, 1);

	return &tuto->heredo.fasado;
}
