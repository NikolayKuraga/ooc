#ifndef FILA_TUTO_H
#define FILA_TUTO_H


#include "objekta_tuto.h"


struct FilaEno;
struct FilaHeredo;
struct FilaFasado;


struct FilaTuto {

	struct ObjektaTuto patro;

	struct FilaEno *eno;

	struct FilaHeredo *heredo;

	struct FilaFasado *fasado;
};


struct FilaTuto *
FaruFilon();


#endif /* FILA_TUTO_H */
