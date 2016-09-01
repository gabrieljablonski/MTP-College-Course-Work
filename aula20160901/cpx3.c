#include <stdio.h>
#include <complex.h>
#include <math.h>
int main()
{
	double complex num_c, num_sqrt;
	double real, img;
	printf("Insira a parte real do numero:\n ");
	scanf("%lf",&real);
	printf("Insira a parte imaginaria do numero:\n ");
	scanf("%lf",&img);
	num_c=real+img*I;
	num_sqrt=csqrt(num_c);
	printf("Raiz quadrada no numero complexo = %g + %g*I\n",creal(num_sqrt),cimag(num_sqrt));
	return 0;
}