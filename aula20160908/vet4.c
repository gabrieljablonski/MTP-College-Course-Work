#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main()
{
	srand(time(0));
	int vetor[1000], n, maior=-1, menor=10;
	scanf("%d", &n);
	for(int i=0; i<n; i++)
	{
		vetor[i]=rand()%10;
		if(maior<vetor[i])
			maior=vetor[i];
		if(menor>vetor[i])
			menor=vetor[i];
	}
	printf("Menor valor = %d\nMaior valor = %d\n", menor, maior);
	return 0;
}