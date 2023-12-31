#ifndef TABELO_DE_CHAROJ_H
#define TABELO_DE_CHAROJ_H


/*
 * KLASA PUBLIKA STRUKTURO
 */
extern const struct TabeloDeCharoj {

	/*
	 * akiruLongon
	 * prenas:
	 *     memo
	 * redonas:
	 *     tabela longo
	 */
	int
	(*akiruLongon)(
		/* memo */ struct TabeloDeCharoj* memo);

	/*
	 * akiru
	 * prenas:
	 *     memo
	 *     elementa indekso en tabelo
	 *     elementa valoro
	 * redonas:
	 *     erara codo
	 */
	unsigned char
	(*akiru)(
		/* memo */ struct TabeloDeCharoj* memo,
		/* enira */ const unsigned int i,
		/* elira */ char* const sim);

	/*
	 * agordu
	 * prenas:
	 *     memo
	 *     elementa indekso en tabelo
	 *     elementa valoro
	 * redonas:
	 *     erara codo
	 */
	unsigned char
	(*agordu)(
		/* memo */ struct TabeloDeCharoj* memo,
		/* enira */ const unsigned int i,
		/* enira */ const char sim);

} TabeloDeCharoj;


/*
 * KLASA FARISTO
 * prenas:
 *     tabela longo
 */
struct TabeloDeCharoj*
FaruTabelonDeCharoj(
	const unsigned int longo);


#endif /* TABELO_DE_CHAROJ_H */
