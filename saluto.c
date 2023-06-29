#include "saluto.h"

const struct Saluto salutoMalplena = {0};

struct Saluto* faruSaluto()
{
	struct Saluto* obj = malloc( sizeof(struct Saluto) );
	if (obj == NULL) {
		return NULL;
	}

	*obj = salutoMalplena;
	obj->donuSekvaChar = donuSekvaChar;

	return obj;
}

unsigned char donuSekvaChar(char* const simbolo)
{
	*simbolo = getchar();
	return 0;
}
