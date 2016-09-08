#include <stdio.h>
int main()
{
	int vetor[10];
	for(int i=0; i<10; i++)
		scanf("%d",&vetor[i]);
	//método 1
	for(int i=9; i>=0; i--)
		printf("%d ",vetor[i]);
	printf("\n");
	//2
	for(int i=0, j=9; i<6; i++, j--)
	{
		int a=vetor[i];
		vetor[i]=vetor[j];
		vetor[j]=a;
	}
	for(int i=0; i<10; i++)
	{
		printf("%d ", vetor[i]);
	}
	printf("\n");
	return 0;
}