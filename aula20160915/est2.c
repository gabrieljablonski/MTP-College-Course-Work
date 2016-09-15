#include <stdio.h>
#include <math.h>
#define soma(p,q) p+q
#define distancia(p,q,r,s,t,u) sqrt(pow(p-s,2)+pow(q-t,2)+pow(r-u,2)) 
typedef struct 
{
		double x;
		double y;
		double z;
}ponto;

int main()
{
	ponto ponto_a, ponto_b, soma;
	double dist;	
	printf("Insira as coordenadas do primeiro ponto:\n");
	scanf("%lf %lf %lf", &ponto_a.x, &ponto_a.y, &ponto_a.z);
	printf("Insira as coordenadas do segundo ponto:\n");
	scanf("%lf %lf %lf", &ponto_b.x, &ponto_b.y, &ponto_b.z);
	soma.x=soma(ponto_a.x,ponto_b.x);
	soma.y=soma(ponto_a.y,ponto_b.y);
	soma.z=soma(ponto_a.z,ponto_b.z);	
	dist=distancia(ponto_a.x,ponto_a.y,ponto_a.z,ponto_b.x,ponto_b.y,ponto_b.z);
	printf("Ponto resultante da soma: [%g,%g,%g]\n",soma.x,soma.y,soma.z);
	printf("Distancia entre os dois pontos: %g\n", dist);
	return 0;
}
