#include <stdio.h>
int main()
{
	double a, b, c, m;
	printf("Insira as tres notas:\n");
	scanf("%lf %lf %lf", &a, &b, &c);
	m=(a*2+b*3+c*5)/10.0;
	printf("%g\n",m);
	return 0;
}