#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    FILE *img;
    unsigned char byte;
	long long ct_az=0, ct_vm=0, ct_vd=0;
	srand(time(0));
    img=fopen("imgtst.bmp","rb");
    int i;
    
	for(i=0; i<54; i++)
    {
        fread(&byte, sizeof(byte), 1, img);
    }
	
  /*  while(!feof(img))
    {
		fread(&byte, 1, 1, img);
		if(byte==255)
			ct_az++;
		fread(&byte, 1, 1, img);
		if(byte==255)
			ct_vd++;
		fread(&byte, 1, 1, img);
		if(byte==255)
			ct_vm++;
	}
	*/
	for(long long j=0; j<100000000; j++)
	{
		fread(&byte, sizeof(byte),1, img);
		if(byte==255)
		{
			ct_az++;
			fseek(img, 2, SEEK_CUR);
		}
		else
		{
			fread(&byte, sizeof(byte),1, img);
			if(byte==255)
			{
				ct_vd++;
				fseek(img, 1, SEEK_CUR);
			}
			else
			{
				fread(&byte, 1, 1, img);
				if(byte==255)
					ct_vm++;
			}
		}
	}
	
	printf("Pixels R: %lld\nPixels G: %lld\nPixels B: %lld\n", ct_vm, ct_vd, ct_az);
    fclose(img);
  
    return 0;
}