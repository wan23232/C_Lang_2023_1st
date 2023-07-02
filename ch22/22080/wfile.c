#include <stdio.h>
int main(int ac, char *av[])
{
	int c;
	FILE *fp;

	fp=fopen("out2","w");

	c='a';
	fputc(c,fp);
	c='b';
	fputc(c,fp);
	c='\n';
	fputc(c,fp);

	fclose(fp);

	return 0;
}
