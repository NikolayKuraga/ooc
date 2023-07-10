#include "tabelo_de_charoj.tuta.h"


int
akiruLongon(
	struct TabeloDeCharojTuta* memo)
{
	return memo->tabelaLongo;
}


unsigned char
akiru(
	struct TabeloDeCharojTuta* memo,
	const unsigned int indekso,
	char* const variablo)
{	
	if ( indekso >= memo->tabelaLongo ) {
		*variablo = '\0';
		return 1;
	}
	*variablo = memo->tabelo[indekso];
	return 0;
}


unsigned char
agordu(
	struct TabeloDeCharojTuta* memo,
	const unsigned int indekso,
	const char variablo)
{
	if ( indekso >= memo->tabelaLongo ) {
		return 1;
	}
	memo->tabelo[indekso] = variablo;
	return 0;
}


struct TabeloDeCharoj*
TabeloDeCharoj(
	const unsigned int tabelaLongo)
{
	struct TabeloDeCharojTuta* memo =
		calloc( 1, sizeof(struct TabeloDeCharojTuta) );

	((struct TabeloDeCharoj*) memo)->akiruLongon = akiruLongon;
	((struct TabeloDeCharoj*) memo)->akiru = akiru;
	((struct TabeloDeCharoj*) memo)->agordu = agordu;

	memo->tabelaLongo = tabelaLongo;
	memo->tabelo = calloc( tabelaLongo, sizeof(char) );
	memo->konto = 0;

	return ((struct TabeloDeCharoj*) memo);
}
