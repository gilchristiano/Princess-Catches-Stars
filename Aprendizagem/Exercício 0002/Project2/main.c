#include <genesis.h>

static void MeuJoystick(u16 joy, u16 changed, u16 state);
static void meuInput();

char textoTela[20] = "Teste do controle";
char textoCurso[30] = "UNINASSAU";

int main() {

	SYS_disableInts();
	VDP_init();
	SPR_init();
	VDP_setScreenWidth320();
	VDP_setScreenHeight224();

	SYS_enableInts();

	VDP_drawText(textoTela, 9, 2);
	VDP_drawText(textoCurso, 28, 24);

	JOY_init();
	JOY_setEventHandler(&MeuJoystick);

	while (TRUE) {
		meuInput();
		VDP_waitVSync();
	}
	return 0;
}

void MeuJoystick(u16 joy, u16 changed, u16 state) {
	if (joy == JOY_1) {
		if (state & BUTTON_START) {
			VDP_clearTextLine(5);
			VDP_drawText("Bot�o START Pressionado!", 3, 5);
		}
		else if (changed & BUTTON_START) {
			VDP_clearTextLine(5);
			VDP_drawText("Bot�o START Liberado!", 3, 5);
		}
		if (state & BUTTON_UP) {
			VDP_clearTextLine(5);
			VDP_drawText("Bot�o UP Pressionado!", 3, 5);
		}
		else if (changed & BUTTON_UP) {
			VDP_clearTextLine(5);
			VDP_drawText("Bot�o UP Liberado!", 3, 5);
		}
		if (state & BUTTON_DOWN) {
			VDP_clearTextLine(5);
			VDP_drawText("Bot�o DOWN Pressionado!", 3, 5);
		}
		else if (changed & BUTTON_DOWN) {
			VDP_clearTextLine(5);
			VDP_drawText("Bot�o DOWN Liberado!", 3, 5);
		}
		if (state & BUTTON_LEFT) {
			VDP_clearTextLine(5);
			VDP_drawText("Bot�o LEFT Pressionado!", 3, 5);
		}
		else if (changed & BUTTON_LEFT) {
			VDP_clearTextLine(5);
			VDP_drawText("Bot�o LEFT Liberado!", 3, 5);
		}
		if (state & BUTTON_RIGHT) {
			VDP_clearTextLine(5);
			VDP_drawText("Bot�o RIGHT Pressionado!", 3, 5);
		}
		else if (changed & BUTTON_RIGHT) {
			VDP_clearTextLine(5);
			VDP_drawText("Bot�o RIGHT Liberado!", 3, 5);
		}
		if (state & BUTTON_A) {
			VDP_clearTextLine(5);
			VDP_drawText("Bot�o A Pressionado!", 3, 5);
		}
		else if (changed & BUTTON_A) {
			VDP_clearTextLine(5);
			VDP_drawText("Bot�o A Liberado!", 3, 5);
		}
		if (state & BUTTON_B) {
			VDP_clearTextLine(5);
			VDP_drawText("Bot�o B Pressionado!", 3, 5);
		}
		else if (changed & BUTTON_B) {
			VDP_clearTextLine(5);
			VDP_drawText("Bot�o B Liberado!", 3, 5);
		}
		if (state & BUTTON_C) {
			VDP_clearTextLine(5);
			VDP_drawText("Bot�o C Pressionado!", 3, 5);
		}
		else if (changed & BUTTON_C) {
			VDP_clearTextLine(5);
			VDP_drawText("Bot�o C Liberado!", 3, 5);
		}
	}
}

static void meuInput() {

	u16 valor = JOY_readJoypad(JOY_1);

	if (valor & BUTTON_UP) {
		VDP_drawText("Botao UP Pressionado!", 3, 5);

	}
	else if (valor & BUTTON_DOWN) {
		VDP_drawText("Botao UP Pressionado!", 3, 5);
	}
	if (valor & BUTTON_LEFT) {
		VDP_drawText("Botao LEFT Pressionado!", 3, 5);
	}
	else if (valor & BUTTON_RIGHT) {
		VDP_drawText("Botao RIGHT Pressionado!", 3, 5);
	}
	if (valor & BUTTON_A) {
		VDP_drawText("Botao A Pressionado!", 3, 5);
	}
	if (valor & BUTTON_B) {
		VDP_drawText("Botao B Pressionado!", 3, 5);
	}
	if (valor & BUTTON_C) {
		VDP_drawText("Botao C Pressionado!", 3, 5);
	}
	if (valor & BUTTON_START) {
		VDP_drawText("Botao UP Pressionado!", 3, 5);
	}
	VDP_drawText("Nenhum botao pressionado!", 3, 5);
}