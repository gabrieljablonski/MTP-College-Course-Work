#include <stdio.h>
int main()
{
	double vetor[10], soma=0, produto=1;
	for(int i=0; i<10; i++)
	{
		scanf("%lf", &vetor[i]);
		soma+=vetor[i];
		produto*=vetor[i];
	}
	printf("Soma = %g\nProduto = %g\n", soma, produto);
	return 0;
}