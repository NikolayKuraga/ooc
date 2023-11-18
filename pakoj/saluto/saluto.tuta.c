#include "saluto.tuta.h"


unsigned char
akiruSekvanCharon(
	struct SalutoTuta* memo,
	char* const m_varu)
{
	*m_varu = getchar();
	return 0;
}


struct Saluto*
FaruSaluton(void)
{
	struct SalutoTuta* memo = calloc( 1, sizeof(struct SalutoTuta) );
	if ( memo == NULL ) {
		return 0;
	}

	((struct Saluto*) memo)->akiruSekvanCharon = akiruSekvanCharon;

	return ((struct Saluto*) memo);
}
