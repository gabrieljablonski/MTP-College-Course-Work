#include <stdio.h>
#include <stdlib.h>
typedef struct _Pilha
{
	int numero;
	struct _Pilha *prox;
}Pilha;

void push(Pilha **ppilha, int elemento);
void pop (Pilha **ppilha);
int top (Pilha *pilha);
int empty(Pilha *pilha);

int main()
{
	Pilha *pilha=NULL;
	int ent;
	
	printf("Insira a sequencia desejada (encerra com numero negativo):\n");
	while(1)
	{
		scanf("%d",&ent);
		if(ent<0)
			break;
		push(&pilha, ent);
	}
	printf("1-Mostrar sequencia invertida\n2-Gravar sequencia invertida em arquivo\n");
	scanf("%d", &ent);
	if(ent==1)
	{
		while(!empty(pilha))
		{
			printf("%d ", top(pilha));
			pop(&pilha);
		}
	}
	
	if(ent==2)
	{
		FILE * arquivo;
		arquivo=fopen("sequencia.txt", "w");
		
		while(!empty(pilha))
		{
			fprintf(arquivo,"%d ", top(pilha));
			pop(&pilha);
		}
		
		printf("Arquivo criado.");
		
		fclose(arquivo);
	}
	
	printf("\n");
	free(pilha);
	return 0;
}

void push(Pilha **ppilha, int elemento)
{
	Pilha *novo=malloc(sizeof(Pilha));
	novo->numero=elemento;
	novo->prox=*ppilha;
	*ppilha=novo;
	
}

void pop (Pilha **ppilha)
{
	if(*ppilha != NULL) 
	{
		Pilha * aux = (*ppilha)->prox;
		free(*ppilha);
		*ppilha = aux;
  	}
}

int top (Pilha *pilha)
{
	if(pilha!=NULL)
		return pilha->numero;
	
	printf("Pilha vazia.\n");
	
}

int empty(Pilha *pilha)
{
	return pilha==NULL;
}