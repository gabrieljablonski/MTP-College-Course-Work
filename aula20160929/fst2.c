#include <stdio.h>

typedef struct
{
	int numerador;
	int denominador;
}racional;

racional soma_fracoes(racional a, racional b);

int main()
{
	racional numero1, numero2, soma;
	scanf("%d/%d", &numero1.numerador, &numero1.denominador);
	scanf("%d/%d", &numero2.numerador, &numero2.denominador);
	soma=soma_fracoes(numero1, numero2);
	printf("%d/%d\n",	 soma.numerador, soma.denominador);
	return 0;
}

racional soma_fracoes(racional a, racional b)
{
	racional c;
	c.denominador=a.denominador*b.denominador;
	c.numerador=a.numerador*b.denominador+b.numerador*a.denominador;
	return c;
}