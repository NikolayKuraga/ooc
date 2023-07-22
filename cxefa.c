#include <stdio.h>

#include "saluto.h"
#include "tabelo_de_charoj.h"

int main()
{
	struct Saluto* saluto = FaruSaluton();
	char simbolo = 0;

	puts("KuLisp");
	puts("Ctrl+c por eliri");
	puts("");	

	while (1) {

		printf("preskaux kutima Lispo> ");

		saluto->akiruSekvanCharon(saluto, &simbolo);
		if ( simbolo == '\n' ) {
			continue;
		}
		printf("%c", simbolo);

		while (1) {
			saluto->akiruSekvanCharon(saluto, &simbolo);
			printf("%c", simbolo);
			if ( simbolo == '\n' ) {
				break;
			}
		}
	}

	return 0;
}
