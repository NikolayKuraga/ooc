#ifndef FILA_FASADO_H
#define FILA_FASADO_H


#include "fila_tuto.h"


struct FilaFasado {

	unsigned
	(*metodoFasada)(
		struct FilaTuto *mi);
};


#endif /* FILA_FASADO_H */
