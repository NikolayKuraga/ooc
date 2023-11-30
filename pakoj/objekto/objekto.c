#include "objekta_eno.h"


char const *const
ObjektaIdentigilo = "Objekto";


static
unsigned
metodoFasada(
	struct ObjektaFasado *mi)
{
	struct ObjektaHeredo *heredo = (struct ObjektaHeredo *) mi;

	puts("Metodo fasada de klaso Objekto.");
	heredo->metodoKasxa(mi);

	return 0;
}

static
unsigned
estas(
	struct ObjektaFasado *mi,
	char const *const identigilo)
{
	unsigned i = 0;
	struct ObjektaFronto *fronto = (struct ObjektaFronto *) mi - 1;
	struct ObjektaFronto ***mm_identigiloMia =
		(struct ObjektaFronto ***) fronto;
	struct ObjektaEno *eno = (
		(struct ObjektaFronto *)
		((char *) mi - sizeof(struct ObjektaFronto))
	)->eno;

	for (i = 0; i < eno->nombroDeIdoj; ++i) {
		if (strcmp(**((char ***) mm_identigiloMia - i), identigilo)) {
			continue;
		}
		return 1;
	}
	return 0;
}

static
unsigned
metodoKasxa(
	struct ObjektaFasado *mi)
{
	struct ObjektaEno *eno = (
		(struct ObjektaFronto *)
		((char *) mi - sizeof(struct ObjektaFronto))
	)->eno;

	puts("Metodo kasxa de klaso Objekto.");
	eno->metodoEna(mi);

	return 0;
}

static
unsigned
metodoEna(
	struct ObjektaFasado *mi)
{
	puts("Metodo ena de klaso Objekto.");
	return 0;
}


struct ObjektaFasado *
FaruObjektonTien(
	void *montrilo,
	unsigned const nombroDeIdoj)
{
	struct ObjektaTuto *tuto = (struct ObjektaTuto *) montrilo;
	/* struct ObjektaPatroTuto *tutoPatra; */




	/* FaruLaPatronDeObjekto((void *) tutoPatra); */

	tuto->fronto.eno = calloc(1, sizeof(struct ObjektaEno));
	tuto->fronto.eno->nomo = ObjektaIdentigilo;

	tuto->heredo.fasado.metodoFasada = &metodoFasada;
	tuto->heredo.fasado.estas = &estas;
	tuto->heredo.metodoKasxa = &metodoKasxa;
	tuto->fronto.eno->metodoEna = &metodoEna;

	tuto->fronto.eno->nombroDeIdoj = nombroDeIdoj;

	return (struct ObjektaFasado *)
		((char *) tuto + sizeof(struct ObjektaFronto));
}

struct ObjektaFasado *
FaruObjekton()
{
	struct ObjektaTuto *tuto = calloc(1, sizeof(struct ObjektaTuto));

	if (tuto == NULL) { return NULL; }
	FaruObjektonTien(tuto, 0);

	return &tuto->heredo.fasado;
}
