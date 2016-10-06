#include <stdio.h>
#include <math.h>
#define N 5

double c_media(double *v);
double sd_pop(double *v, double m);
double sd_spop(double *v, double m);

int main()
{
	double valores[N];
	for(int i=0; i<N; i++)
		scanf("%lf", &valores[i]);
	
	printf("Media = %g\n", c_media(valores));
	printf("Desvio padrao (populacao) = %g\n", sd_pop(valores, c_media(valores)));
	printf("Desvio padrao (subpopulacao) = %g\n", sd_spop(valores, c_media(valores)));
	return 0;
}

double c_media(double *v)
{
	double media=0;
	for(int i=0;i<N;i++)
	{
		media+=v[i];
	}
	return media/=N;
}

double sd_pop(double *v, double m)
{
	double sd=0;
	for(int i=0; i<N; i++)
	{
		sd+=(v[i]-m)*(v[i]-m);
	}
	return sd=sqrt(sd/N);
}

double sd_spop(double *v, double m)
{
	double sd=0;
	for(int i=0; i<N; i++)
	{
		sd+=(v[i]-m)*(v[i]-m);
	}
	return sd=sqrt(sd/(N-1));
}