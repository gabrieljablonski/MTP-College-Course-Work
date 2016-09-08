#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
	char frase[256], msg[256];
	int i, q=0;
	gets(frase);
	
	if(frase[0]!=' ')
	{
		msg[0]=frase[0];
		q++;
	}
	for(i=1; frase[i]!='\0'; i++)
	{
		if(frase[i]==' '&& frase[i+1]!=' ' && frase[i+1]!='\0')
		{
			msg[q]=toupper(frase[i+1]);
			q++;
		}
	}
	msg[q]='\0';
	printf("%s\n", msg);
	return 0;
}