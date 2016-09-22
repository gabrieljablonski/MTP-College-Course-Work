#include <stdio.h>
#include <string.h>
void par_ou_impar();
int main()
{
	printf("Escolha entre mostrar pares ou impares:\n");
	par_ou_impar();
	return 0;
}
void par_ou_impar()
{
	char escolha[10], par[]="par", impar[]="impar";
	fflush(stdin);
	gets(escolha);
	if(strcmp(escolha,par)==0)
		printf("2, 4, 6, 8\n");
	else if(strcmp(escolha,impar)==0)
		printf("1, 3, 5, 7, 9\n");
}