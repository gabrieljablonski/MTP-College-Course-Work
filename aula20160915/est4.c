#include <stdio.h>
#include <math.h>
#define convert_y(r,g,b) 16+(65.481*(r/255.0)+128.553*(g/255.0)+24.966*(b/255.0))
#define convert_cb(r,g,b) 128+(-37.797*(r/255.0)-74.203*(g/255.0)+112.0*(b/255.0))
#define convert_cr(r,g,b) 128+(112*(r/255.0)-93.786*(g/255.0)-18.214*(b/255.0))
typedef struct
{
	double r;
	double g;
	double b;
}RGB;

typedef struct
{
	double y;
	double cb;
	double cr;
}ycbcr;

int main()
{
	RGB corr;
	ycbcr cory;
	
	printf("Insira os valores de cor em RGB:\n");
	scanf("%lf %lf %lf", &corr.r, &corr.g, &corr.b);
	cory.y=convert_y(corr.r, corr.g, corr.b);
	cory.cb=convert_cb(corr.r, corr.g, corr.b);
	cory.cr=convert_cr(corr.r, corr.g, corr.b);
	printf("Padrao Y'CbCr:\n%g %g %g\n",round(cory.y),round(cory.cb),round(cory.cr));
	
	return 0;
}

