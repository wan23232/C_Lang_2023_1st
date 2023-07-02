#include <stdio.h>
int main(int ac, char *av[])
{
	char temp;
	unsigned char mask=0x80;

	scanf("%hhx",&temp);

	for(int i=0;i<8;i++){
		if(temp&mask){
			printf("1");
		}else{
			printf("0");
		}
		mask=mask>>1;
	}
	printf("\n");
}
