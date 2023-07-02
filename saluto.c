#include "saluto.h"


/** malplena objekto */
const struct Saluto salutoMalplena = {0};


/** defauxlta konstruanto */
struct Saluto* Saluto()
{
	struct Saluto* obj = calloc( 1, sizeof(struct Saluto) );
	if (obj == NULL) {
		return 0;
	}

	obj->donuSekvaChar = donuSekvaChar;

	return obj;
}


/* funkcioj */

/** proceduro por akiri sekvan simbolon */
unsigned char donuSekvaChar(char* const simbolo)
{
	*simbolo = getchar();
	return 0;
}
