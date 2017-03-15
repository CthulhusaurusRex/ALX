#include "include/mem.h"
#include <stdio.h>
#include "include/instruction.h"
unsigned char get_num_args(){
	unsigned char out = *PC;
	out = out >> 6;
 	//printf("out = %d", out);
	if(out == 3){
		//printf("invalid # of args\n memory address# %d", (char)(PC - memory));
	}
	return out;
}
void inst_tick(){
unsigned char cur = get_num_args();
printf("Decoding instruction: %d\n", inst);
printf("# of args = %d\n", cur);
unsigned char args[cur];
int i;
unsigned char inst = *PC ;
inst &= ~(1 << 7); // turn off bit 7
inst &= ~(1 << 6); //turn off bit 6

for(i = 0; i < cur; i++){
++PC;
args[i] = *PC;
}
PC++;
unsigned char last = inst;
last &= ~(1 << 5);
last &= ~(1 << 4);
switch(inst >> 4){
case 0:
	arithmetic(last, args);
	break;
case 1:
	stack_mem(last, args);
	break;
case 2: 
	bit(last, args);
	break;
case 3:
	jump(last, args);
	break;
}
}
void arithmetic(char last4, char args[]){
switch(last4){
	case 1:
		//printf("arg[0] = %d = %d\n",((unsigned char) args[0]), *(memory + args[0]));
		//printf("arg[1] = %d = %d\n",((unsigned char) args[1]), *(memory + args[1]));
		*(memory+args[0]) += *(memory+args[1]);
		//printf("mem location %d = %d\n", args[0], *(memory+args[0])); 
		break;
	case 2:
		*(memory+args[0]) -= *(memory+args[1]);
		break;
	case 3:
		*(memory+args[0]) *= *(memory+args[1]);
		break;
	case 4:
		*(memory+args[0]) /= *(memory+args[1]);
		break;
	case 5:
		*(memory+args[0]) *= *(memory+args[0]);
		break;
	case 6:
		*(memory+args[0]) += 1;
		break;
	case 7:
		*(memory+args[0]) -= 1;
		break;
}
}
void stack_mem(char last4, char args[]){
			int i;
			int j;
	switch(last4){
		case 1:
			*SP = *(memory + args[0]);
			*SP--;
			break;
		case 2:
			j = args[0];
			for(i =0; i < args[1]; i++){
				SP--;	
				//printf("SP = %d = %d\n", (int)(SP - memory), *SP);
				*SP = *(memory + j);
				j++;
			}
			break;
		case 3:
			*(memory + args[0]) = *SP;
			SP++;
			break;
		case 4:
			SP = (memory + arg[0]);
			break;
		case 5:
			char *temp;
			temp = (memory+arg[0]); 
			(memory+arg[0]) =  (memory+arg[1]);
			(memory+arg[1]) = temp;


	}
}
void bit(char last4, char args[]){
}
void jump(char last4, char args[]){
}
