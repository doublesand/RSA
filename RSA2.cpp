#include "cryptomath.h"
int main()
{
	char  p[100] = "233454645461"; //���������� 
	char q[100] = "45431321519";
	char n[200];
	char mo_pq[200];        //(p-1) * (q-1)
	char e[200] = "1354543113";
	char d[200];
	char m[200] = "666";
	char C[200];
	FILE *F1;
	F1 = fopen("RSA2.txt", "w");
	strcpy(n, BigMulti(p, q));       //n 
	strcpy(p, BigSub(p, "1"));       //p-1 
	strcpy(q, BigSub(q, "1"));       //q-1
	strcpy(mo_pq, BigMulti(p, q));   //(p-1)(q-1)
	while (checkbs(e, "10000000000000000000") == 2)  //eС�ڵڶ����� 
	{
		strcpy(e, BigAdd(e, "2"));                   //��ѡ���� 
		if (strcmp(gcdch(mo_pq, e), "1") == 0)       //�ж�e �� (p-1)(q-1)�Ƿ��� 
		{
			fprintf(F1, "e:%s \n", e);               //����e 
			break;
		}
	}
	fprintf(F1, "(p-1)(q-1):%s\n", mo_pq);           //����(p-1)(q-1) 
	strcpy(d, inver(e, mo_pq));                      //��1mod((p-1)(q-1)) /e       
	if (strcmp(d, "0") == 0) printf("Error");                  
	else fprintf(F1, "d:%s \n", d);                 //����d 
	fprintf(F1, "n:%s \n", n);
	return 0;
}
