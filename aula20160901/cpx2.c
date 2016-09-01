#include <stdio.h>
#include <complex.h>
int main()
{
	double complex num_c, num_conj, res_m;
	double real, img;
	printf("Insira a parte real do numero:\n ");
	scanf("%lf",&real);
	printf("Insira a parte imaginaria do numero:\n ");
	scanf("%lf",&img);
	num_c=real+img*I;
	num_conj=conj(num_c);
	res_m=num_c*num_conj;
	printf("Resultado da multiplicacao pelo conjugado = %g",creal(res_m));
	return 0;
}