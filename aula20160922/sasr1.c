#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>
void robo_gracinha();
int main()
{
	srand(time(0));
	char dump[256], f[]="tchau";
	printf("&Oi pessoa!\n");
	fflush(stdin);
	gets(dump);
	while(strcmp(dump,f)!=0)
	{
		fflush(stdin);
		robo_gracinha();
		gets(dump);
	}
	printf("&Tchau tchau!\n");
	return 0;
}

void robo_gracinha()
{
	int a=rand()%7;
	switch(a)
	{
		case 0:
			printf("&Tudo bem?\n");
			break;
		case 1:
			printf("&Ok\n");
			break;
		case 2:
			printf("&LOL!\n");
			break;
		case 3:
			printf("&Que legal\n");
			break;
		case 4:
			printf("&Que chato\n");
			break;
		case 5:
			printf("&Fale mais sobre isso\n");
			break;
		case 6:
			printf("&Sobre o que quer falar?\n");
			break;
	}
}