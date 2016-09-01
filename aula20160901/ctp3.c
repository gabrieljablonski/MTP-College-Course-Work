#include <stdio.h>
#include <ctype.h>
int main()
{
	char frase[256];
	int num_char=0;
	printf("Insira a frase desejada:\n ");
	fflush(stdin);
	gets(frase);
	for(int i=0; frase[i]!='\0'; i++)
		if(isalpha(frase[i]))
			num_char++;
	printf("Numero de caracteres na frase digitada: %d\n",num_char);
	return 0;
}