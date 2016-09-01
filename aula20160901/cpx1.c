#include <stdio.h>
#include <complex.h>
int main()
{
	double complex num_c1, num_c2, num_cs;
	double real, img;
	printf("Insira a parte real do primeiro numero:\n ");
	scanf("%lf",&real);
	printf("Insira a parte imaginaria do primeiro numero:\n ");
	scanf("%lf",&img);
	num_c1 = real + img*I;
	printf("Insira a parte real do segundo numero:\n ");
	scanf("%lf",&real);
	printf("Insira a parte imaginaria do segundo numero:\n ");
	scanf("%lf",&img);
	num_c2 = real + img*I;
	num_cs=num_c1+num_c2;
	printf("Soma dos dois numeros = %g + %g*I\n",creal(num_cs),cimag(num_cs));
	return 0;
}