#include <stdio.h>

#include "saluto.h"
#include "tabelo_de_charoj.h"

int main()
{
	struct Saluto* saluto = Saluto();
	char simbolo = 0;

	puts("KuLisp");
	puts("Ctrl+c por eliri");
	puts("");	

	while (1) {

		printf("preskaux kutima Lispo> ");

		saluto->donuSekvaChar(&simbolo);
		if ( simbolo == '\n' ) {
			continue;
		}
		printf("%c", simbolo);

		while (1) {
			saluto->donuSekvaChar(&simbolo);
			printf("%c", simbolo);
			if ( simbolo == '\n' ) {
				break;
			}
		}
	}

	return 0;
}
