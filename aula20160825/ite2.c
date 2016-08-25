#include <stdio.h>
int main()
{
	int b, p;
	long int r;
	printf("Insira uma base e uma potencia nao negativa:\n");
	scanf("%d %d",&b,&p);
	if(p==0)
		printf("%d^0 = 1\n", b);
	else
	{
		r=b;
		for(int i=1; i<p; i++)
			r*=b;
		printf("%d^%d = %ld\n",b,p,r);
	}
	return 0;
}