#include <stdio.h>
void bitprintf(int n){
	unsigned int mask=0x80000000;
	for(int i=0;i<32;i++){
		if(n&mask){
			printf("1");
		}else{
			printf("0");
		}
		mask=mask>>1;
	}
}
int main(int ac, char *av[])
{
	int num;


	scanf("%x",&num);

	bitprintf(num);


}
