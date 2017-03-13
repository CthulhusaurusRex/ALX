#include <stdio.h>
#include "../mem.h"
#define TERM_HEIGHT 15 
#define TERM_LENGTH 40
struct mem_map{
char *x;
char *y;
char *z;
}display;
char term[TERM_HEIGHT][TERM_LENGTH];
void display_init();
void display_tick();
void print_screen();
