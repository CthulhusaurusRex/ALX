#include <stdlib.h>
#include <stdio.h>
#include "include/mem.h"
#include "include/drivers/display.h"
#include "include/instruction.h"
int main(){
/*struct tst{
int a;
int b;
};
struct tst a;
int b;

printf("%d", sizeof(a)/sizeof(b));
*/
int i;
unsigned char a[28];// = {81,3,4,24,68,55,65,74,12,71,'@',1,1};
for(i = 0; i < 28; i++){
	a[i] = 0;
}
init_mem(a);
*(memory) = 181;
*(memory +1) = 3;
*(memory +2) = 4;
*(memory +3) = 83;
*(memory +4) = 82;
*(memory +10) = 122;
*(memory +11) = 43;
*(memory +12) = 69;


//printf("PC = %d\n", *PC);
//printf("PC num args = %d\n",get_num_args());
/*char *my_mem;
allocate_mem(&my_mem, 5);
printf("lowest memory address is %d\n", mem_end - & a[0]);
//printf("my_mem = %d", *my_mem);
for(i = 0; i < num; i++){
	printf(" p[%d] = %d", i , *(my_mem - i));
}*/
display_init();
//printf("location of PC = %d\n", (int)(PC - memory));
//printf("value of PC = %d \n", (unsigned char)*PC);
init_stack();
inst_tick();

printf("FR = %d\n", FR);
//printf("valu of memory location 3 = %d\n", (unsigned char)*(memory+3));
/*printf("lowest memory address is %d\n", (int)(mem_end - & a[0]));
	char *msg = "BOOTING ALX...\0";
	while(*msg != '\0'){
	*display.z = *msg;
	display_tick();	
	msg++;
	(*display.x)++;
	}*/


}

