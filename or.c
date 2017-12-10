#include <stdio.h>

#define FLAG1 0x0001
#define FLAG2 0x0002
#define FLAG3 0x0004
#define FLAG4 0x0008
#define FLAG5 0x0080
#define FLAG6 0x0010
#define FLAG7 0x0020
#define FLAG8 0x00FF


int main() {
	int FLAGS = FLAG1 | FLAG2;

	if (!((!(FLAGS & FLAG1)                                       
                       || !(FLAGS & (FLAG2 | FLAG3 | FLAG4 | FLAG5)))         
                      && (!(FLAGS & FLAG2)                                    
                          || !(FLAGS & (FLAG3 | FLAG4 | FLAG5)))              
                      && (!(FLAGS & FLAG3)                                    
                          || !(FLAGS & (FLAG4 | FLAG5)))                      
                      && (!(FLAGS & FLAG4)                                    
                          || !(FLAGS & FLAG5)))) {
		printf("Atmost one must be used\n");
		exit(1);
	}               

	return 0;                
}
