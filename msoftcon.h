#ifndef MSOFTCON_H
#define MSOFTCON_H

#include <windows.h>  

enum color {
    cBLACK, cDARK_BLUE, cDARK_GREEN, cDARK_CYAN, cDARK_RED, cDARK_MAGENTA, cBROWN, cLIGHT_GRAY,
    cDARK_GRAY, cBLUE, cGREEN, cCYAN, cRED, cMAGENTA, cYELLOW, cWHITE
};

enum direction { HORIZ, VERT };

void init_graphics();
void set_color(color);
void set_cursor_pos(int x, int y);
void draw_char(int x, int y, char ch);
void draw_line(int x1, int y1, int x2, int y2, char ch);
void clear_screen();

#endif
