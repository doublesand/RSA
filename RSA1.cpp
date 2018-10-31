#include "cryptomath.h"

int main()
{
	char  p[100] = "233454645437";
	char q[100] = "45431321513";

	FILE *F1;
	F1 = fopen("RSA1.txt", "w");

	while (checkbs(p, "1000000000000000") == 2) {
		strcpy(p, BigAdd(p, "2"));
		if (checksu(p) == "1") {
			fprintf(F1, "p:%s \n", p);
			break;
		}

	}
	while (checkbs(q, "1000000000000000") == 2) {
		strcpy(q, BigAdd(q, "2"));
		if (checksu(q) == "1") {
			fprintf(F1, "q:%s \n", q); break;
		}


	}
}
