#include <stdio.h>
int main()
{
	FILE *fp;
	int c;

	fp=fopen("fgetc.c","r");
	if(fp==0){
		printf("파일 열기 오류\n");
		return 1;
	}
	c=fgetc(fp);
	putchar(c);

	c=fgetc(fp);
	putchar(c);

	c=fgetc(fp);
	putchar(c);

	fclose(fp);
}
