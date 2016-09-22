#include <stdio.h>
int primo(int numero);
int main()
{
	int i, numero, flag=1;
	printf("Entre com um numero: ");
	scanf("%d", &numero);
	for(i=1; i<=numero/2; i++)
		if(primo(i) && primo(numero-1))
		{
			printf("%d + %d\n", i, numero-i);
			flag=0;
		}
	if(flag)
		printf("Nao pode ser expresso.\n");
	
	
	return 0;
}

int primo(int numero)
{
	int i, checa =1;
	for(i=0; i<=numero/2;i++)
		if(numero%i==0)
		{
			checa=0;
			break;
		}
	return checa;
}