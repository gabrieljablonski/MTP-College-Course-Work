#include <stdio.h>
int main()
{
	char frase[256];
	gets(frase);
	for(int i=0; frase[i]; i++)
	{
		if((frase[i]>=65 && frase[i]<=77)||(frase[i]>=97&&frase[i]<=109))
			frase[i]=frase[i]+13;
		else if((frase[i]>=78 && frase[i]<=90)||(frase[i]>=110&&frase[i]<=122))
			frase[i]=frase[i]-13;
	}
	printf("%s\n", frase);
	return 0;
}