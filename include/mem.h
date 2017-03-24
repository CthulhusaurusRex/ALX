unsigned char *memory;
unsigned char *mem_end;
unsigned char *SP;
unsigned char *PC;
unsigned char FR;
//static char R1
//static char IR;
void init_mem(unsigned char *p);
void find_end(unsigned char *p);
void allocate_mem(unsigned char **start, unsigned char num);
void print_mem();
void init_stack();
