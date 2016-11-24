#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    FILE *img, *img2;
    unsigned char byte;
	
	img=fopen("img.bmp", "rb");
	
	fseek(img, 54, SEEK_SET);
	
	for(int i=0; i<50; i++)
	{	
		for(int j=0; j<100; j++)
		{
			fread(&byte, sizeof(byte), 1, img);
			if(byte==255)
				printf(" ");
			if(byte==0)
				printf("%c", 432);
			fseek(img, 2, SEEK_CUR);
		}
		printf("\n");
	}
	
	fclose(img);
    
    return 0;
}