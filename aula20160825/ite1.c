#include <stdio.h>
int main()
{
	int n;
	long long int f=1;
	printf("Insira um numero inteiro nao negativo:\n ");
	scanf("%d",&n);
	if(n>1)
		for(int i=1; i<=n; i++)
			f*=i;
	printf("Fatorial de %d:\n %lld\n",n,f);
	return 0;
}