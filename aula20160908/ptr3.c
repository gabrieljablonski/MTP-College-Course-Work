#include <stdio.h>
int main()
{
	int vetor[]={0xFF,0xFFFF,0xFFFFFF,0xFFFFFFFF}, q=0;
	unsigned char *a, *b;
	a = b = (unsigned char *)vetor;
	for(; a < b + sizeof(vetor); a++)
	{
		if(*a==0xFF)
			q++;
		printf("%X \n", *a);
	}
	
	printf("%d \n", q);
	return 0;
}