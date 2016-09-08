#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
	char frase[256];
	int f=0;
	gets(frase);
	
	for(int i=0; frase[i+1]!='\0'; i++)
	{
		while(frase[i]==' ')
		{
			if(frase[i+1]!=' ')
				frase[i]=frase[i+1];
			int a=i+1;
			for(;frase[a];a++)
				frase[a]=frase[a+1];
		}
	}
	for(int i=0; frase[i]!='\0'; i++)
		frase[i]=tolower(frase[i]);
	
	for(int i=0, j=strlen(frase)-1; i<=strlen(frase)/2; i++, j--)
		if(frase[i]!=frase[j])
			f=1;
	if(f)
		printf("nao\n");
	else
		printf("sim\n");
	
	
	return 0;
}