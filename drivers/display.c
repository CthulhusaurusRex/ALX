#include "../include/drivers/display.h"
void display_init(){
	unsigned char *mem;
	printf("size of display %d \n", (int)sizeof(struct mem_map)/8);
	allocate_mem(&mem, sizeof(struct mem_map)/8);
	display.x = mem;
	display.y = mem -1;
	display.z = mem -2;	

	char i;
	char j;
	for(i = 0; i < TERM_HEIGHT; i++){
		for(j = 0; j < TERM_LENGTH; j++){
			term[i][j] = '*';
		}
	}
}
void display_tick(){
	printf("display.x = %d\n", *display.x);
	printf("display.y = %d\n", *display.y);
	printf("display.z = %d\n", *display.z);
	term[*display.y][*display.x] = *display.z;
	print_screen();
}
void print_screen(){
char i;
char j;
for(i = 0; i < TERM_HEIGHT; i++){
	for(j = 0; j < TERM_LENGTH; j++){
		printf("%c", term[i][j]);
	}
	printf("\n");
}
}
