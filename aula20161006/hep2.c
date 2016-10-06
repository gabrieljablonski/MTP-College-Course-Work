#include <stdio.h>
#include <stdlib.h>

double** aloca_m(double **m, int l, int c);
void free_m(double **m, int l);
void print_m(double **m, int l, int c);
double** cria_transposta(double **m, int l, int c, double **t);

int main()
{
	int linhas, colunas;
	double **matriz = NULL, **transposta = NULL;

	scanf("%d %d", &linhas, &colunas);

	matriz=aloca_m(matriz, linhas, colunas);
	transposta=aloca_m(transposta, colunas, linhas);

	
	for (int i = 0; i<linhas; i++)
		for (int j = 0; j<colunas; j++)
			scanf("%lf", &matriz[i][j]);

	transposta=cria_transposta(matriz, linhas, colunas, transposta);

	print_m(transposta, colunas, linhas);

	free_m(matriz, linhas);
	free_m(transposta, linhas);

	return 0;
}

double** aloca_m(double **m, int l, int c)
{
	m = (double**)calloc(l, sizeof(double*));
	for (int i = 0; i<l; i++)
		m[i] = (double*)calloc(c, sizeof(double));
	return m;
}

void free_m(double **m, int l)
{
	for (int i = 0; i<l; i++)
		free(m[i]);
	free(m);
}

void print_m(double **m, int l, int c)
{
	for (int i = 0; i<l; i++)
	{
		printf("[ ");
		for (int j = 0; j<c; j++)
			printf("%g ", m[i][j]);
		printf("]\n");
	}
}

double** cria_transposta(double **m, int l, int c, double **t)
{
	for (int i = 0; i<l; i++)
		for (int j = 0; j<c; j++)
			t[i][j] = m[j][i];
	return t;
}