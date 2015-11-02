#define _XOPEN_SOURCE_EXTENDED

#include <ncurses.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL,"");
	initscr();
	raw();
	keypad(stdscr, TRUE);
	mousemask(ALL_MOUSE_EVENTS | REPORT_MOUSE_POSITION, NULL);
	noecho();

	mvprintw(2,2,"╬");
	refresh();

	int c = getch();
	endwin();
	return 0;
}
