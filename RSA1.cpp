#include "cryptomath.h"

int main()
{
	char  p[100] = "233454645437";
	char q[100] = "45431321513";

	FILE *F1;
	F1 = fopen("RSA1.txt", "w");                   //打开文件准备写入数据 
	
	printf("--------doublesand---------\n");
	while (checkbs(p, "1000000000000000") == 2) {  //保证p<第二个数  
		strcpy(p, BigAdd(p, "2"));                 //只需要判断奇数 
		if (checksu(p) == "1") {                   //检测p是否为素数 
			fprintf(F1, "p:%s \n", p);
			printf ("p:%s \n", p);
			break;
		}

	}
	while (checkbs(q, "1000000000000000") == 2) {  
		strcpy(q, BigAdd(q, "2"));
		if (checksu(q) == "1") {
			fprintf(F1, "q:%s \n", q); 
			printf ("p:%s \n", q);
			break;
		}
	}
}
