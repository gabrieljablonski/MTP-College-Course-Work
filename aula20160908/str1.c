#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main()
{
	char frase[256], b[]="BOM DIA";
	int i;
	gets(frase);
	for(i=0; frase[i]; i++)
		frase[i]=toupper(frase[i]);
	printf("Tamanho da frase = %d\n", i);
	if(!strcmp(frase,b))
		printf("Bom dia pra voce tambem\n");
	else
		printf("Voce quer dizer: %s?\n",frase);
	return 0;
}