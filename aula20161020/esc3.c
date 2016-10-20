#include <stdio.h>
#include <string.h>
typedef struct{
	float x;
	float y;
}Ponto;
void gravaPonto(Ponto ponto, char nome_arquivo[]);
int main()
{
	Ponto ponto;
	int numero_de_pontos;
	char nome_arquivo[256];
	printf("Insira o numero de pontos que serao inseridos: ");
	scanf("%d", &numero_de_pontos);
	printf("Insira o nome do arquivo: ");
	fflush(stdin);
	fgets(nome_arquivo, 256, stdin);
	nome_arquivo[strlen(nome_arquivo)-1]='\0';
	for(int i=0; i<numero_de_pontos; i++)
	{
		printf("Ponto #%d: \n", i+1);
		printf(" Coordenada X: ");
		scanf("%f",&ponto.x);
		printf(" Coordenada Y: ");
		scanf("%f",&ponto.y);
		gravaPonto(ponto, nome_arquivo);
	}
	
	return 0;
	
}

void gravaPonto(Ponto ponto, char nome_arquivo[])
{
	FILE * arquivo;
	arquivo=fopen(nome_arquivo, "ab");
	fprintf(arquivo, "X:%g\nY:%g\n", ponto.x, ponto.y);
	fclose(arquivo);
}