#ifndef FILA_FASADO_H
#define FILA_FASADO_H


#include "tuto.h"


struct FilaFasado {

	unsigned
	(*metodoFasada)(
		struct FilaTuto *mi);
};


#endif /* FILA_FASADO_H */
