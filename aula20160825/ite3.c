#include <stdio.h>
int main()
{
	int q=0;
	char p[256];
	printf("Insira uma palavra:\n");
	scanf("%s",p);
	for(int i=0;p[i]!='\0';i++)
		q++;
	printf("Tamanho da palavra '%s': %d\n",p,q);
	return 0;
}
