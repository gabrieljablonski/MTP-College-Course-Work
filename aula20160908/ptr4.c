#include <stdio.h>
int main()
{
	double a, b, c;
	scanf("%lf %lf", &a, &b);
	c=a+b;
	printf("%X : %g\n%X : %g\n%X : %g\n", &a, a, &b, b, &c, c);
	
	return 0;
}