#include <stdio.h>
int main()
{
	int num;
	float num_f, inv_f;
	double num_d, inv_d;
	printf("Insira um numero inteiro:\n ");
	scanf("%d",&num);
	
	inv_f=1.0/num;
	inv_f=(float)(inv_f);
	num_f=inv_f;
	
	for(int i=1; i<729; i++)
		num_f+=inv_f;
	
	inv_d=1.0/num;
	inv_d=(double)(inv_d);
	num_d=inv_d;
	
	for(int i=0; i<729; i++)
		num_d+=inv_d;
	
	printf("Tipo float: %.15f\nTipo double: %.15f",num_f,num_d);
	return 0;
}