#include "include/mem.h"
#include <stdio.h>
void init_mem(unsigned char *p){
memory = p;
printf("value at start = %d\n", *memory);
PC = memory;
printf("PC = %d\n", *PC);
find_end(memory);
}
void find_end(unsigned char *p){
while(*p != '\0'){
//*(++p);
printf("value at end = %d\n",*p); 
//p++;
*(++p);
}
mem_end = p-1;
printf("value at end = %d\n", *(mem_end)); 
}
void allocate_mem(unsigned char **start, unsigned char num){
	*start = mem_end;
	printf("%d\n", *mem_end);
	mem_end -= num; 
	printf("%d\n", *mem_end);
}
void init_stack(){
	SP = mem_end;
}
void print_mem(){
	unsigned char *a;
	a = memory;
	while(*a != '\0'){
	printf("[%d]", *a);
	a++;
	}
	printf("\n" );
}
