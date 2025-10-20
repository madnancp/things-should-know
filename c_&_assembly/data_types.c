// MEMORY ALLOCATION IN C
//
// Stack	: For function calls and local variables
// Heap		: For dynamic allocation space 
// Code segment : Stores compiled instruction
// Data segment : Stores global/static variables
//


#include <stdio.h>
#include <stdlib.h>

int main(){
	int age = 10;
	float PI = 3.14;
	char initial = 'k';

	printf("Age: %d, stored in %p (%zu bytes)\n", age, &age, sizeof(age));
	printf("PI: %.2f, stored in %p (%zu bytes)\n", PI, &PI, sizeof(PI));
	printf("initial: %c, stored in %p (%zu bytes)\n", initial, &initial, sizeof(initial));


	// stack vs heap
	
	// stack
	int a = 10;   // stack will automatically manage
	
	// heap
	int *ptr = malloc(4); // assign 4 byte memory space
	*ptr = 50;  // store int 50 (4 byte) at the allocated memory addr
	free(ptr);

	return 0;
}



// Age: 10, stored in 0x7ffc18efb47c (4 bytes)                                                                                                 │
// PI: 3.14, stored in 0x7ffc18efb478 (4 bytes)                                                                                                │
// initial: k, stored in 0x7ffc18efb477 (1 bytes)                                                                                              │
