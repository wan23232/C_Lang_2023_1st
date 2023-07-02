#include <stdio.h>
int main(int ac, char *av[])
{
	char data[4][16];
	unsigned char mask=0x80;
	FILE *fp;

	fp=fopen("pic","r");

	for(int i=0;i<16;i++){
		for(int n=0;n<4;n++){
			data[n][i]=fgetc(fp);
		}
	}


	for(int i=0;i<16;i++){
		for(int n=0;n<4;n++){
			mask=0x80;
			for(int t=0;t<8;t++){
				if(data[n][i]&mask){
					printf("*");
				}else{
					printf(" ");
				}
				mask=mask>>1;
			}
		}
		printf("\n");
	}

	fclose(fp);

	
}
