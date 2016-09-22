#include <stdio.h>
#include <math.h>
#define soma(p,q) p+q
#define distancia(p,q,r,s) sqrt(pow(p-r,2)+pow(q-s,2)) 
typedef struct 
{
		double x;
		double y;
}ponto;

int main()
{
	ponto ponto_a, ponto_b, soma;
	double dist;	
	printf("Insira as coordenadas do primeiro ponto:\n");
	scanf("%lf %lf", &ponto_a.x, &ponto_a.y);
	printf("Insira as coordenadas do segundo ponto:\n");
	scanf("%lf %lf", &ponto_b.x, &ponto_b.y);
	soma.x=soma(ponto_a.x,ponto_b.x);
	soma.y=soma(ponto_a.y,ponto_b.y);	
	dist=distancia(ponto_a.x,ponto_a.y,ponto_b.x,ponto_b.y);
	printf("Ponto resultante da soma: [%g,%g]\n",soma.x,soma.y);
	printf("Distancia entre os dois pontos: %g\n", dist);
	return 0;
}
