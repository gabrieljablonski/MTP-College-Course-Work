#include <math.h>
#include <stdio.h>
#define NUMERO_DE_PIXELS_MAXIMO 1000000
int main()
{
	FILE *img, *img2;
	struct Pixel{unsigned char b; unsigned char g; unsigned char r;} pixel, pixel2;
	pixel2.r=0;
	pixel2.g=0;
	pixel2.b=255;
	int WPX, HPX, BPP, PAL, i, j, AUX, offset;
	unsigned char byte;
	unsigned short word;
	unsigned int dword;
	img=fopen("img.bmp", "rb");

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
	offset=dword;
	
	
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
	
	img2=fopen("trocada.bmp","wb");
	rewind(img);
	for(i=0; i<offset; i++)
	{
		fread(&byte, sizeof(byte), 1, img);
		fwrite(&byte, sizeof(byte), 1, img2);
	}

	
	byte=0x0;
	AUX = PAL - WPX*3;
	
	for(j=0; j<HPX; j++)
	{
		for(i=0; i<WPX; i++)
		{
			fread(&pixel, sizeof(pixel), 1, img);
			if((pixel.r==74 && pixel.g==171 && pixel.b==3)||((pixel.r!=0&&pixel.b!=0&&pixel.g!=0)&&(pixel.r!=255&&pixel.b!=255&&pixel.g!=255))) 
				fwrite(&pixel2, sizeof(pixel2), 1, img2);
			else
				fwrite(&pixel, sizeof(pixel), 1, img2);
		}
		if(AUX>0)
		{
			fseek(img, AUX, SEEK_CUR);
			for(i=0; i<AUX; i++)
				fwrite(&byte, sizeof(byte), 1, img2);
		}
	}
	fclose(img);
	fclose(img2);
	return 0;
}