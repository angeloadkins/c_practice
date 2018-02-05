#include <stdio.h>

int main() {

	int pizza = 12;
	printf("%p ", &pizza);

	return 0;
}

The function `printf` will return the value '0x7ffef3f566cci' which is the address of pizza. 
