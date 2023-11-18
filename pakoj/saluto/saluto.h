#ifndef SALUTO__H
#define SALUTO__H


struct Saluto*
FaruSaluton(void);


/*
 * KLASA TUTA STRUKTURO
 */
struct Saluto {

	/*
	 * akiru sekvan charon
	 */
	unsigned char
	(*akiruSekvanCharon)(
		struct Saluto* memo,
		char* const m_varo);
};


#endif /* SALUTO__H */
