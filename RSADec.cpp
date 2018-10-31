#include "cryptomath.h"

int main() {
	char n[200] = "10606153058042844975259";
	char d[200] = "441999782244336135933";
	char C[200] = "3340837462332730253382";

	Bigmodexp(C, d, n);
	printf("Decrypto:%s \n", Expres);
}
