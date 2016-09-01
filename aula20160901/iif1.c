#include <stdio.h>
#include <float.h>
#include <time.h>
#include <stdlib.h>
#include <stdint.h>
int main()
{
	//parte 1
	if(1.0>1.0-DBL_EPSILON/4.0)
		printf("1 e' maior!\n");
	else
		printf("Conceito comprovado!\n");
	//parte 2
	srand(time(0));
	double num;
	int i;
	printf("Quantidade de numeros entre 0 e 1:\n ");
	scanf("%d",&i);
	while(i)
	{
		num=(double)rand()/(double)RAND_MAX;
		printf("%g\n",num);
		i--;
	}
	
	return 0;
}