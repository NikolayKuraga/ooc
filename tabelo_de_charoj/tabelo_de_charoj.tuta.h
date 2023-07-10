#ifndef TABELO_DE_CHAROJ__TUTA__H
#define TABELO_DE_CHAROJ__TUTA__H


#include "tabelo_de_charoj.h"


/*
 * KLASA TUTA STRUKTURO
 */
struct TabeloDeCharojTuta {

	/* remburajxo estas loko por publikaj metodoj kaj kampoj */
	struct TabeloDeCharoj remburajxo;

	/* tabela longo */
	unsigned int tabelaLongo;

	/* montrilo al vera tabelo */
	char* tabelo;

	/* simple konto */
	unsigned int konto;

	/*
	 * nuligu
	 * prenas:
	 *     memo
	 * redonas:
	 */
	void
	(*nuligu)(
		struct TabeloDeCharojTuta* memo);

	/*
	 * alkrementu
	 * prenas:
	 *     memo
	 * redonas:
	 */
	void
	(*alkrementu)(
		struct TabeloDeCharojTuta* memo);
};


#include <stdlib.h>
#include <stdio.h>


#endif /* TABELO_DE_CHAROJ__TUTA__H */
