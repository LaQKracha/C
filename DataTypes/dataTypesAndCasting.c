#include <stdio.h>

int main(int argc, char *argv[]){
	// char (1 byte, 8 bits), short (2 bytes, 16 bits), int (4 bytes, 32 bits), long long int (8 bytes, 64 bits).
	// signed (negative numbers values), unsigned (just possitive values)
	// float (less accuracy), double (more accuracy)
	
	// Type Casting:
	// same size, but different type
	unsigned int x = 5;
	int s = (int)(x);
	
	// downcasting
	unsigned int bx = 0xfffffefe; // information loss
	short kindabig = (short)bigx;

	// upcasting
	short sh2 = -1;
	int wasashort = (int)sh2;

	// crosscasting
	float f = 3.14;
	int wasfloat = (int)f;

	//
	(char *)
	(short *)
	short *mydata = (short*)argv[1];

	return 0;
}
