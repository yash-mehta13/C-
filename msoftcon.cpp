// msoftcon.cpp
#include "msoftcon.h"
#include <iostream>

static HANDLE hConsole;
static COORD cursor_pos;

void init_graphics() {
    hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_CURSOR_INFO cursorInfo;
    cursorInfo.dwSize = 1;
    cursorInfo.bVisible = FALSE;
    SetConsoleCursorInfo(hConsole, &cursorInfo);
    system("cls");
}

void set_color(color col) {
    SetConsoleTextAttribute(hConsole, static_cast<int>(col));
}

void set_cursor_pos(int x, int y) {
    cursor_pos.X = x;
    cursor_pos.Y = y;
    SetConsoleCursorPosition(hConsole, cursor_pos);
}

void draw_char(int x, int y, char ch) {
    set_cursor_pos(x, y);
    std::cout << ch;
}

void draw_line(int x1, int y1, int x2, int y2, char ch) {
    if (x1 == x2) {
        for (int y = y1; y <= y2; ++y)
            draw_char(x1, y, ch);
    } else if (y1 == y2) {
        for (int x = x1; x <= x2; ++x)
            draw_char(x, y1, ch);
    }
}

void clear_screen() {
    system("cls");
}
