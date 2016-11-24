#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    FILE *img, *img2;
    unsigned char byte;
	srand(time(0));
    img=fopen("imgr.bmp","rb");
    img2=fopen("rnd.bmp","wb");
    int i;
    for(i=0; i<54; i++)
    {
        fread(&byte, sizeof(byte), 1, img);
        fwrite(&byte, sizeof(byte),1,img2);
    }
	unsigned char a, b;
	byte=255;
	b=0;
    while(!feof(img))
    {
		fread(&a, sizeof(a),1, img);
     
		b=rand()%3;
		
		if(b==0) //azul
		{
			fwrite(&byte, sizeof(byte),1, img2);
			fwrite(&b, sizeof(byte),1, img2);
			fwrite(&b, sizeof(byte),1, img2);
		}
		else if(b==1) //verde
		{
			fwrite(&b, sizeof(byte),1, img2);
			fwrite(&byte, sizeof(byte),1, img2);
			fwrite(&b, sizeof(byte),1, img2);
		}
		else //vermelho
		{
			fwrite(&b, sizeof(byte),1, img2);
			fwrite(&b, sizeof(byte),1, img2);
			fwrite(&byte, sizeof(byte),1, img2);
		}	
	
	}
    fclose(img);
    fclose(img2);
    return 0;
}