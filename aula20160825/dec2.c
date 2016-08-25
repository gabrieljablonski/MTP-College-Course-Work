#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
	srand(time(0));
	int n;
	printf("Insira um numero inteiro nao negativo:\n");
	scanf("%d",&n);
	if((n+(rand()%2))%2)
		printf("impar\n");
	else
		printf("par\n");
	return 0;
}
