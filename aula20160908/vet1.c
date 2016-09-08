#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main()
{
	srand(time(0));
	int r[10000], n;
	double media=0;
	scanf("%d",&n);
	for(int i=0; i<10000; i++)
	{
		r[i]=(rand()%n)+1;
		media+=r[i];
	}
	media=media/10000.;
	printf("%g\n",media);
	return 0;
}