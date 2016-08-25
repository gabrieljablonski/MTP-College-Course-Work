#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
	int n, i=1, s=0;
	srand(time(0));
	while(i<4)
	{	
		n=0;
		printf("Dado %d:\n ",i);
		while(n==0)
			n=rand()%7;
		printf("%d\n", n);
		s+=n;
		i++;
	}
	printf("Soma dos dados:\n %d\n", s);
	if(s==7||s==11)
		printf("Ganhou!\n");
	else
		printf("Nao ganhou!\n");
	return 0;
}