#include <stdio.h>
#include <stdlib.h>

typedef struct
{
	char nome[64];
	int idade;
	int telefone;
}individuo;

#define ncad(a,n) \
({ printf("Insira o nome:\n"); \
	fflush(stdin); \
	fgets(a[n].nome,64,stdin); \
	fgets(a[n].nome,64,stdin); \
	printf("Insira a idade:\n"); \
	scanf("%d",&a[n].idade); \
	printf("Insira o telefone:\n"); \
	scanf("%d",&a[n].telefone); \
	n++; })

#define listar_n(a,n) \
({	for(int i=1; i<n+1; i++) \
		printf("Nome %d: %s\n",i,a[i-1].nome); })
#define listar_i(a,n) \
({	for(int i=1; i<n+1; i++) \
		printf("Idade %d: %d\n",i,a[i-1].idade); })
#define listar_t(a,n) \
({	for(int i=1; i<n+1; i++) \
		printf("Telefone %d: %d\n",i,a[i-1].telefone); })

int main()
{
	individuo cadastro[100];
	int n=0, opt;
	while(1)
	{
		printf("Selecione a opcao desejada:\n");
		printf(" 1-Novo cadastro\n 2-Listar nomes\n 3-Listar idades\n 4-Listar telefones\n 0-Sair\n");
		scanf("%d", &opt);
		switch(opt)
		{
			case 0:
				exit(0);
			case 1:
				ncad(cadastro,n);
				break;
			case 2:
				if(n)
					listar_n(cadastro,n);
				else
					printf("Nao existem registros.\n");
				break;
			case 3:
				if(n)
					listar_i(cadastro,n);
				else
					printf("Nao existem registros.\n");
				break;
			case 4:
				if(n)
					listar_t(cadastro,n);
				else
					printf("Nao existem registros.\n");
				break;
		}		
	}	
	return 0;
}

