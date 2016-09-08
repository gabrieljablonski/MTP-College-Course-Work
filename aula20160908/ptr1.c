#include <stdio.h>
#include <stdlib.h>
int main()
{
	unsigned int oi= 0xFACA8421;
	unsigned char *ola = NULL;
	printf("%p : %u \n", &oi, oi);
	
	ola=(unsigned char *) &oi;
	for(int i=0; i<sizeof(unsigned int); i++)
	{
		printf("%p : %X\n", ola+i, *(ola+i));
	}
	
	return 0;
}