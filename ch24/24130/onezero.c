#include <stdio.h>
int main(int ac, char *av[])
{
	char temp;

	scanf("%hhx",&temp);
	
	unsigned char mask=0x80;
	for(int i=0;i<4;i++){
		if(temp&mask){
			printf("1");
		}else{
			printf("0");
		}
		mask=mask>>1;
	}
	printf("\n");
}
