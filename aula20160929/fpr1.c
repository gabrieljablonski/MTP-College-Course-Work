#include <stdio.h>

int divisao(int dividendo, int divisor, 
		int *quociente, int *resto);
		
int main() {
	int dividendo, divisor;
	int quociente, resto;
	printf("Entre com o dividendo: ");
	scanf("%d",&dividendo);
	printf("Entre com o divisor: ");
	scanf("%d",&divisor);
	if(divisao(dividendo, divisor, &quociente, &resto))
		printf("Quociente: %d; Resto: %d\n", quociente, resto);
	else
		printf("*erro*\n");
	return 0;
}

int divisao(int dividendo, int divisor, 
		int *quociente, int *resto) {
	if(divisor != 0) {
		*quociente = dividendo / divisor;
		*resto = dividendo % divisor;
		return 1;
	} else return 0;
}