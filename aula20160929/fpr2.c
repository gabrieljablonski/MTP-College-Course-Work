#include <stdio.h>
#include <ctype.h>
void so_letras(char*frase1, char*frase2);
int main()
{
	char frase_entrada[64], frase_letras[64];
	fgets(frase_entrada, 64, stdin);
	so_letras(frase_entrada, frase_letras);
	printf("%s\n", frase_letras);
	return 0;
}

void so_letras(char*frase1, char*frase2)
{
	int i=0, a=0;
	for(;frase1[i]!='\0';i++)
		if(isalpha(frase1[i]))
		{
			frase2[a]=frase1[i];
			a++;
		}
	frase2[a]='\0';
}