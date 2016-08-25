#include <stdio.h>
int main()
{
	int n=0, f=1;
	while(n<1)
	{
		printf("Insira um numero inteiro positivo:\n ");
		scanf("%d",&n);
	}
	for(int i=2; i<=n/2; i++)
		if(n%i==0)
		{
			f=0;
			break;
		}
	if(f&&n>=2)
		printf("O numero %d e' primo.\n",n);
	else
		printf("O numero %d nao e' primo.\n", n);	
	return 0;
}