#include <stdio.h>
#include <math.h>
int main()
{
	double side_a, side_b, side_c, ang;
	printf("Insira os dois lados do triangulo:\n ");
	scanf("%lf %lf",&side_b,&side_c);
	printf("Insira o angulo formado entre os dois lados:\n ");
	scanf("%lf",&ang);
	side_a=sqrt(side_b*side_b+side_c*side_c-2.0*side_b*side_c*cos(ang));
	printf("Terceiro lado do triangulo = %g\n",side_a);
	return 0;
}