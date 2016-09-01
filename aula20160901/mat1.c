#include <stdio.h>
#include <math.h>
int main()
{
	double coord_x1, coord_y1, coord_x2, coord_y2, dist;
	printf("Insira as coordenadas (x,y) do primeiro ponto:\n ");
	scanf("%lf %lf", &coord_x1, &coord_y1);
	printf("Insira as coordenadas (x,y) do segundo ponto:\n ");
	scanf("%lf %lf", &coord_x2, &coord_y2);
	dist=sqrt(pow(coord_x2-coord_x1,2)+pow(coord_y2-coord_y1,2));
	printf("Distancia entre os dois pontos = %g\n",dist);
	return 0;
}