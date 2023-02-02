#include <ncurses.h>

int main()
{
    initscr();
    printw("Hello World !!!"); // notice no newline
    refresh();
    getch();
    endwin();

    return 0;
}
