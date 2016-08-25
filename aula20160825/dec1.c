#include <stdio.h>
int main()
{
	int n;
	printf("Insira um numero inteiro:\n");
	scanf("%d",&n);
	if(n%2==0)
		printf("par\n");
	else
		printf("impar\n");
	if(n%3==0)
		printf("mult.3\n");
	if(n%5==0)
		printf("mult.5\n");	
	if(n%7==0)
		printf("mult.7\n");	
	return 0;
}