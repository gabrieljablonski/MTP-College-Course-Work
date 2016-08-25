#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define pel printf("\n")
int main()
{
	srand(time(0));
	int x, n, q=0;
	x=rand()%100;
	while(1)
	{
		printf("Insira um numero no intervalo 0~99:\n ");
		scanf("%d",&n);
		q++;
		if(n==x&&q==1)
		{	
			printf("Acertou de primeira!\n");
			break;
		}
		else if(n==x)
		{	
			printf("Acertou em %d tentativas!\n", q);
			break;
		}
		else if(n>x)
			printf("Alto");
		else
			printf("Baixo");
		pel;
	}
	
	return 0;
}