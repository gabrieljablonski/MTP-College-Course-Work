#include <stdio.h>
int main()
{
	int n, s=1;
	printf("Insira um numero inteiro positivo:\n");
	scanf("%d",&n);
	for(int i=2; i<=n/2; i++)
		if(n%i==0)
			s+=i;
	if(n==s&&n>=2)
		printf("O numero %d e' perfeito.",n);
	else
		printf("O numero %d nao e' perfeito.",n);
	printf("\n");
	return 0;
}