#include <stdio.h>
#define MP 10

typedef struct
{
	int topo;
	char pilha[MP];
}_pilha;

void push(_pilha *ppilha, char elemento);
void pop(_pilha *ppilha);
char top(_pilha pilha);
int empty(_pilha pilha);

int main()
{
	_pilha pilha;
	pilha.topo=-1;
	
	for(int i=0; i<5; i++)
	{
		push(&pilha, 'A'+i);
		printf("%c ", top(pilha));
	}
	
	printf("\n");
	
	while(!empty(pilha))
	{
		printf("%c ", top(pilha));
		pop(&pilha);
	}
	
	printf("\n");
	
	for(int i=0; i<MP+1; i++)
	{
		push(&pilha, 'A'+i);
		printf("%c ", top(pilha));
	}
	
	printf("\n");
	
	return 0;
}

void push(_pilha *ppilha, char elemento)
{
	if(ppilha->topo+1<MP)
	{
		ppilha->topo++;
		ppilha->pilha[ppilha->topo]=elemento;
	}
	else
	{
		printf("\nEstouro de pilha.\n");
	}
}

void pop(_pilha *ppilha)
{
	if(ppilha->topo>=0)
	{
		ppilha->pilha[ppilha->topo]=0x0;
		ppilha->topo--;
	}
}

char top(_pilha pilha)
{
	return pilha.pilha[pilha.topo];
}

int empty(_pilha pilha)
{
	return pilha.topo==-1;
}