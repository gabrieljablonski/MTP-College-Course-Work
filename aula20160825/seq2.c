#include <stdio.h>
int main()
{
	double b, h, a;
	printf("Insira a base e a altura do triangulo:\n");
	scanf("%lf %lf",&b,&h);
	a=b*h/2.0;
	printf("%.100g\n",a);	 //"%.yo" -> '.y' limita casas decimais da variavel 'o' em 'y' casas apos a virgula
	return 0;
}