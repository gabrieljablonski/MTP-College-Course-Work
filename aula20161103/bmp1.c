#include <math.h>
#include <stdio.h>
#define NUMERO_DE_PIXELS_MAXIMO 100000
int main()
{
	FILE *img;
	struct Pixel{int r; int g; int b;} pixels[NUMERO_DE_PIXELS_MAXIMO];
	int WPX, HPX, BPP, PAL, i, j, AUX;
	unsigned char byte;
	unsigned short word;
	unsigned int dword;
	img=fopen("img2.bmp", "rb");

	leitura_cabecalho:
	fread(&byte, sizeof(byte), 1, img);
	printf("%c", byte);
	//B
	fread(&byte, sizeof(byte), 1, img);
	printf("%c\n", byte);
	//M

	fread(&dword, sizeof(dword), 1, img);
	printf("Tamanho do arquivo(bytes):%u\n", dword);
	
	fseek(img, 4, SEEK_CUR);
	
	fread(&dword, sizeof(dword), 1, img);
	printf("Offset para a imagem(bytes):%u\n", dword);
	
	fread(&dword, sizeof(dword), 1, img);
	printf("Tamanho da segunda parte do cabecalho(bytes):%u\n", dword);
	
	fread(&dword, sizeof(dword), 1, img);
	printf("Largura da imagem(pixels):%u\n", dword);
	WPX=(int)dword;
	
	fread(&dword, sizeof(dword), 1, img);
	printf("Altura da imagem(pixels):%u\n", dword);
	HPX=(int)dword;
	
	fread(&word, sizeof(word), 1, img);
	printf("Planos de cores:%u\n", word);
	
	fread(&word, sizeof(word), 1, img);
	printf("Bits por pixel:%u\n", word);
	BPP=(int)word;
	
	fread(&dword, sizeof(dword), 1, img);
	printf("Compressao:%u\n", dword);
	
	fread(&dword, sizeof(dword), 1, img);
	printf("Tamanho da imagem(bytes):%u\n", dword);
	
	fread(&dword, sizeof(dword), 1, img);
	printf("Resolucao horizontal:%u\n", dword);
	
	fread(&dword, sizeof(dword), 1, img);
	printf("Resolucao vertical:%u\n", dword);
	
	fread(&dword, sizeof(dword), 1, img);
	printf("Numero de cores na paleta:%u\n", dword);
	
	fread(&dword, sizeof(dword), 1, img);
	printf("Numero de cores importantes:%u\n", dword);
	
	
	leitura_imagem:
	PAL = floor((BPP*WPX + 31.)/32.)*4;
	AUX = PAL - WPX*3;
	
	int a=0;
	for(j=0; j<HPX; j++)
	{
		for(i=0; i<WPX; i++)
		{
			fread(&byte, sizeof(byte), 1, img); 
			pixels[a].b=(int)byte;
			fread(&byte, sizeof(byte), 1, img); 
			pixels[a].g=(int)byte;
			fread(&byte, sizeof(byte), 1, img); 
			pixels[a].r=(int)byte;
			a++;
		}
		if(AUX>0)
			fseek(img, AUX, SEEK_CUR);
	}
	int b;
	for(b; b<a; b++)
	{
		printf("Pixel #%d:\n", b+1);
		printf(" Canal R > %d\n", pixels[b].r);
		printf(" Canal G > %d\n", pixels[b].g);
		printf(" Canal B > %d\n", pixels[b].b);
	}
	
	fclose(img);
	return 0;
}