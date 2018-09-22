#include <stdio.h>
#include "main.h"


int main() {
	int a = 0x1122;
	int b = 0x3344;
	printf("a = 0x%X.\n", a);
	printf("b = 0x%X.\n", b);
	printf("\n");

	OSWAP_VAR(a, b, int);
	printf("OSWAP_VAR(a, b, int).\n");
	printf("a = 0x%X.\n", a);
	printf("b = 0x%X.\n", b);
	printf("\n");

	OSWAP_BUF(a, b);
	printf("OSWAP_BUF(a, b).\n");
	printf("a = 0x%X.\n", a);
	printf("b = 0x%X.\n", b);
	printf("\n");

	OSWAP_ADDSUB(a, b);
	printf("OSWAP_ADDSUB(a, b).\n");
	printf("a = 0x%X.\n", a);
	printf("b = 0x%X.\n", b);
	printf("\n");

	OSWAP_XOR(a, b);
	printf("OSWAP_XOR(a, b).\n");
	printf("a = 0x%X.\n", a);
	printf("b = 0x%X.\n", b);
	printf("\n");

	OSWAP_BITSXOR(a, b, 0xFF00);
	printf("OSWAP_BITSXOR(a, b, 0xFF00).\n");
	printf("a = 0x%X.\n", a);
	printf("b = 0x%X.\n", b);
	printf("\n");

	OSWAP(a, b);
	printf("OSWAP(a, b).\n");
	printf("a = 0x%X.\n", a);
	printf("b = 0x%X.\n", b);
	printf("\n");

	OSWAP_BITS(a, b, 0xFF00);
	printf("OSWAP_BITS(a, b, 0xFF00).\n");
	printf("a = 0x%X.\n", a);
	printf("b = 0x%X.\n", b);
	printf("\n");
	return 0;
}
