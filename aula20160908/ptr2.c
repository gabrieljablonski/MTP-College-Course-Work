#include <stdio.h>
int main()
{
	int vetor[] = {0,1,2,4,8}, co=0;
	unsigned char *c, *q;
	c = q = (unsigned char *)vetor;
	for(; c<q+sizeof(vetor); c++)
	{
		if(*c==0x0)
			co++;
		printf("%X \n", *c);
	}	
	printf("%d \n", co);
	return 0;
}