#include <stdio.h>
#include <ctype.h>
int main()
{
	char frase[256];
	printf("Insira a frase desejada:\n ");
	fflush(stdin);	
	gets(frase);
	for(int i=0; frase[i]!='\0'; i++)
		frase[i]=toupper(frase[i]);
	printf("Frase em caixa alta:\n '%s'\n",frase);
	return 0;
}