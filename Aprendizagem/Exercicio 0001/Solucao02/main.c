#include <genesis.h>

char textoTitulo[30] = "Princess Catches Stars";
char textoEmpresa[30] = "MEGA DRIVE (TecToy, 2022)";
char textoCurso[30] = "UNINASSAU";

int main() {

	SYS_disableInts();
	VDP_init();
	SPR_init();
	VDP_setScreenWidth320();
	VDP_setScreenHeight224();

	SYS_enableInts();
	VDP_drawText(textoTitulo, 8, 7);
	VDP_drawText(textoEmpresa, 7, 9);
	VDP_drawText(textoCurso, 28, 24);

	while (TRUE) {

		VDP_waitVSync();
	}
	return 0;
}