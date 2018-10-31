#include "cryptomath.h"

int main()
{
	char e[200] = "1354543117";
	char m[200] = "5201314";
	char n[200] = "10606153058042844975259";
	char C[200];
	Bigmodexp(m, e, n);
	strcpy(C, Expres);
	printf("Crypto:%s \n", C);
}
