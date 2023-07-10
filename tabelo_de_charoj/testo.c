#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#include "tabelo_de_charoj.h"

int main(void)
{
	unsigned char eraro = 0;
	int i;
	char c;
	struct TabeloDeCharoj* tabeloDeCharoj;
	char* signocxeno = "Saluton";

	printf("Test...\n");

	tabeloDeCharoj = TabeloDeCharoj(4);

	for ( i = 0; i < 7; ++i ) {
		eraro = tabeloDeCharoj->agordu( tabeloDeCharoj, i, signocxeno[i] );
		if ( eraro ) {
			printf("\neraro\n");
			break;
		}
	}

	for ( i = 0; i < 7; ++i ) {
		eraro = tabeloDeCharoj->akiru( tabeloDeCharoj, i, &c );
		if ( eraro ) {
			printf("\neraro\n");
			break;
		}
		printf("%c", c);
	}

	printf("\n");

	return 0;
}
