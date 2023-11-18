#ifndef TABELO_DE_CHAROJ_TUTA_H
#define TABELO_DE_CHAROJ_TUTA_H


/*
 * Cxi tiu cxapdosiero enhavas klasajn publikajn partojn.
 */


#include "objekto.h"

#include "tabelo_de_charoj.h"


/*
 * Klasa strukturo publika.
 * Estas spaco por publikaj metodoj kaj kampoj.
 */
extern const struct TabeloDeCharojTuta {

	struct Objekto objekto;

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

} TabeloDeCharojTuta;


#include <stdio.h>
#include <stdlib.h>


#endif /* TABELO_DE_CHAROJ_TUTA_H */
