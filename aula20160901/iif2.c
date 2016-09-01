#include <stdio.h>
#include <stdlib.h>
int main()
{
	long long int num, fac=1;
	printf("Insira um numero nao negativo:\n ");
	scanf("%lld",&num);
	if(num<0)
	{
		printf("Entrada invalida.\n");
		exit(0);
	}
	for(int i=2; i<=num; i++)
		fac*=i;
	printf("Fatorial(%lld) = %lld\n",num,fac);
	return 0;
}