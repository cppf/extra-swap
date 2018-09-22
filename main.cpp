#include <stdio.h>
#include "main.h"


int main() {
	int a = 0x1122;
	int b = 0x3344;
	printf("a = 0x%X.\n", a);
	printf("b = 0x%X.\n", b);
	printf("\n");

	ESWAP_VAR(a, b, int);
	printf("ESWAP_VAR(a, b, int).\n");
	printf("a = 0x%X.\n", a);
	printf("b = 0x%X.\n", b);
	printf("\n");

	ESWAP_BUF(a, b);
	printf("ESWAP_BUF(a, b).\n");
	printf("a = 0x%X.\n", a);
	printf("b = 0x%X.\n", b);
	printf("\n");

	ESWAP_ADDSUB(a, b);
	printf("ESWAP_ADDSUB(a, b).\n");
	printf("a = 0x%X.\n", a);
	printf("b = 0x%X.\n", b);
	printf("\n");

	ESWAP_XOR(a, b);
	printf("ESWAP_XOR(a, b).\n");
	printf("a = 0x%X.\n", a);
	printf("b = 0x%X.\n", b);
	printf("\n");

	ESWAP_BITSXOR(a, b, 0xFF00);
	printf("ESWAP_BITSXOR(a, b, 0xFF00).\n");
	printf("a = 0x%X.\n", a);
	printf("b = 0x%X.\n", b);
	printf("\n");

	OSWAP(a, b);
	printf("OSWAP(a, b).\n");
	printf("a = 0x%X.\n", a);
	printf("b = 0x%X.\n", b);
	printf("\n");

	ESWAP_BITS(a, b, 0xFF00);
	printf("ESWAP_BITS(a, b, 0xFF00).\n");
	printf("a = 0x%X.\n", a);
	printf("b = 0x%X.\n", b);
	printf("\n");
	return 0;
}
