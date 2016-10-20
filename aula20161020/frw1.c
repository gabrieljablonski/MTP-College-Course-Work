#include <stdio.h>
#include <string.h>
#define NCHAR 256
void gravarDados();
void lerDados();
int main()
{
	int opcao;
	i_i:
	printf("Escolha uma opcao:\n");
	printf(" 1-Escrever informacoes\n");
	printf(" 2-Ler informacoes\n");
	printf(" 0-Sair\n");
	scanf("%d",&opcao);
	getchar();// ENTER
	if(opcao==1)
	{
		gravarDados();
		goto i_i;
	}
	if(opcao==2)
	{
		lerDados();
		goto i_i;
	}
	
	
	return 0;
}

void gravarDados()
{
	FILE * arquivo;
	char nome[NCHAR];
	int idade;
	float altura;
	printf("Insira o nome: ");
	fflush(stdin);
	fgets(nome, NCHAR, stdin); 
	nome[strlen(nome)-1]='\0'; //remove ENTER;
	printf("Insira a idade: ");
	fscanf(stdin, "%d", &idade);
	printf("Insira a altura: ");
	fscanf(stdin, "%f", &altura);
	
	arquivo=fopen("info.txt", "w");
	if(arquivo==NULL)
	{
		fprintf(stderr, "Erro na gravacao do arquivo\n");
	}
	else
	{
		fprintf(arquivo, "%s\n%d\n%g\n\n", nome, idade, altura);
		fclose(arquivo);	
	}	
}

void lerDados()
{
	FILE * arquivo;
	char nome[NCHAR];
	int idade;
	float altura;
	
	arquivo=fopen("info.txt", "r");
	if(arquivo==NULL)
	{
		fprintf(stderr, "Arquivo nao existente\n");
	}
	else
	{
		fgets(nome, NCHAR, arquivo); nome[strlen(nome)-1]='\0';
		fscanf(arquivo, "%d\n%f", &idade, &altura);
		fclose(arquivo);
		printf("Nome: %s\n", nome);
		printf("Idade: %d\n", idade);
		printf("Altura: %g\n", altura);
	}
}