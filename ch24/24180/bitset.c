#include <stdio.h>
int main(int ac, char *av[])
{
	char i;

	scanf("%hhx",&i);

	i=i|0x01;

	printf("%hhx\n",i);

	i=i|0x80;
	
	printf("%hhx\n",i);


}
