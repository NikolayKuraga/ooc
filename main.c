#include <stdio.h>

#include "saluto.h"

int main() {

	struct Saluto* saluto = faruSaluto();
	char simbolo = 0;

	puts("KuLisp");
	puts("Ctrl+c por eliri");
	puts("");	

	while (1) {

		printf("preskaux common lisp> ");

		while (1) {
			saluto->donuSekvaChar(&simbolo);
			if ( simbolo == '\n' ) {
				break;
			}
		}
	}

	return 0;
}
