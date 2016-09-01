#include <stdio.h>
#include <math.h>
int main()
{
	double base, num, res_log;
	printf("Insira um numero e a base do logaritmo:\n ");
	scanf("%lf %lf",&num,&base);
	res_log=log(num)/log(base);
	printf("Logaritmo de %g na base %g = %g\n",num,base,res_log);
	return 0;
}