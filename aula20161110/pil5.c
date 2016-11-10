#include <stdio.h>
#include <stdlib.h>
typedef struct _Pilha
{
	float numero;
	struct _Pilha *prox;
}Pilha;

void push(Pilha **ppilha, float elemento);
void pop (Pilha **ppilha);
float top (Pilha *pilha);
int empty(Pilha *pilha);

int main()
{
	Pilha *pilha=NULL;
	FILE * arquivo = fopen("dados.txt", "r");	
	float numero;
	
	while(!feof(arquivo))
	{
		fscanf(arquivo, "%f\n", &numero);
		push(&pilha, numero);
	}
	
	printf("Numeros no arquivo:\n");
	while(!empty(pilha))
	{
		printf(" %g\n", top(pilha));
		pop(&pilha);
	}
	
	free(pilha);
	return 0;
}

void push(Pilha **ppilha, float elemento)
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

float top (Pilha *pilha)
{
	if(pilha!=NULL)
		return pilha->numero;
	
	printf("Pilha vazia.\n");
	
}

int empty(Pilha *pilha)
{
	return pilha==NULL;
}