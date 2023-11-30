#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "objekta_fasado.h"
#include "fila_fasado.h"
#include "tabelo_de_charoj.h"


struct Nediso {
	enum {
		Nediso_Nilo,
		Nediso_Paro,
		Nediso_Symbolo,
		Nediso_Entjero
	} tipo;

	union {
		void *nilo;
		struct Nediso_Paro *paro;
		char *symbolo;
		long entjero;
	} valoro;
};

struct Nediso_Paro {
	struct Nediso nediso[2];
};

struct Nediso
cons(
	struct Nediso car_valoro,
	struct Nediso cdr_valoro)
{
	struct Nediso p;

	p.tipo = Nediso_Paro;
	p.valoro.paro = malloc(sizeof(struct Nediso_Paro));
	p.valoro.paro->nediso[0] = car_valoro;
	p.valoro.paro->nediso[1] = cdr_valoro;
	return p;
}

struct Nediso
faruEntjero(long x)
{
	struct Nediso a;
	a.tipo = Nediso_Entjero;
	a.valoro.entjero = x;
	return a;
}

char *
strdup(char const *const charoj)
{
	char *charoj_nova;
	unsigned longo;

	for (longo = 0; charoj[longo] != '\0'; longo++);

	charoj_nova = malloc(longo * sizeof(char));
	for (longo = 0; charoj[longo] != '\0'; longo++) {
		charoj_nova[longo] = charoj[longo];
	}

	charoj_nova[longo] = 0;
	return charoj_nova;
}

struct Nediso
faruSymbolo(const char *s)
{
	struct Nediso a;
	a.tipo = Nediso_Symbolo;
	a.valoro.symbolo = strdup(s);
	return a;
}

void
print_expr(struct Nediso nediso)
{
	switch (nediso.tipo) {
	case Nediso_Nilo:
		printf("NILO");
		break;
	case Nediso_Paro:
		putchar('(');
		print_expr(nediso.valoro.paro->nediso[0]);
		nediso = nediso.valoro.paro->nediso[1];
		while (nediso.tipo != Nediso_Nilo) {
			if (nediso.tipo == Nediso_Paro) {
				putchar(' ');
				print_expr(nediso.valoro.paro->nediso[0]);
				nediso = nediso.valoro.paro->nediso[1];
			} else {
				printf(" . ");
				print_expr(nediso);
				break;
			}
		}
		putchar(')');
		break;
	case Nediso_Symbolo:
		printf("%s", nediso.valoro.symbolo);
		break;
	case Nediso_Entjero:
		printf("%ld", nediso.valoro.entjero);
		break;
	}
}

int
main()
{
	char simo = '\0';
	int rezulto = 0;

	struct TabeloDeCharoj *tabelo = FaruTabelonDeCharoj(10);
	struct ObjektaFasado *objekto = FaruObjekton();
	struct FilaFasado *filo = FaruFilon();

	if (objekto == NULL || filo == NULL) {
		printf("Memora eraro");
		return -1;
	}

	puts("");
	objekto->metodoFasada(objekto);

	puts("");
	filo->metodoFasada(filo);

	puts("");
	((struct ObjektaFasado *) filo)->
		metodoFasada((struct ObjektaFasado *) filo);

	puts("");
	rezulto = ((struct ObjektaFasado *) filo)->
		estas((struct ObjektoFasado *) filo, "lol");

	printf("%d\n", rezulto);

	puts("");
	switch (rezulto) {
	case 1:
		printf("Filo estas %s!\n", FilaIdentigilo);
		break;
	default:
		printf("Filo ne estas %s!\n", FilaIdentigilo);
		break;
	}

	puts("");
	/* objekto->metodoKasxa(); */
	/* objekto->metodoEna(); */

	/* print_expr(faruEntjero(42)); */
	/* puts(""); */
	/* print_expr(faruSymbolo("MERDE!")); */
	/* puts(""); */
	/* print_expr(cons(faruSymbolo("X"), faruSymbolo("Y"))); */
	/* puts(""); */
	/* print_expr( */
	/* 	cons(faruEntjero(1), cons(faruEntjero(2), faruEntjero(3)))); */
	/* puts(""); */

	tabelo->agordu(tabelo, 0, 'c');
	tabelo->akiru(tabelo, 0, &simo);
	printf("%c\n", simo);

	/* printf("%i\n", objekto->estas(objekto)); */

	puts("Done!");

	return 0;
}
