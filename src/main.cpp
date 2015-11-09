#define _XOPEN_SOURCE_EXTENDED

#include <ncurses.h>
#include <locale.h>

#include "game.h"

int main()
{
	game activegame;

	setlocale(LC_ALL,"");
	initscr();
	raw();
	keypad(stdscr, TRUE);
	mousemask(ALL_MOUSE_EVENTS | REPORT_MOUSE_POSITION, NULL);
	noecho();
	curs_set(0);
	timeout(10);

	while(int c = getch() != 'q')
	{
		//clear();
		erase();
		activegame.update();
		activegame.draw();
		refresh();
	}
	endwin();
	return 0;
}
