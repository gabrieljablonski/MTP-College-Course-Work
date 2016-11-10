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
	int deci, aux;
	printf("Entre com o numero em base decimal:\n");
	scanf("%x", &deci);
	aux=deci;
	while(aux>0)
	{
		push(&pilha, aux%2);
		aux/=2;
	}
	printf("Numero em binario: ");
	while(!empty(pilha))
	{
		printf("%d", top(pilha));
		pop(&pilha);
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