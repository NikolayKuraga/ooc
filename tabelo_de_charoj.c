#include "tabelo_de_charoj.h"


/** malplena objekto */
const struct TabeloDeCharoj tabeloDeCharojMalplena = {0};


/** defauxlta konstruanto */
struct TabeloDeCharoj* TabeloDeCharoj( int len )
{
	struct TabeloDeCharoj* obj = calloc( 1, sizeof(TabeloDeCharoj) );
	if ( obj == NULL ) {
		return 0;
	}

	return obj;
}


/* funkcioj */
