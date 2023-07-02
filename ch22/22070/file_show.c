#include <stdio.h>
int main(int ac, char *av[])
{
	int c;
	FILE *fp;

	fp=fopen("hello.txt","r");
	if(fp==0){
		printf("실패\n");
		return 1;
	}
	
	while((c=fgetc(fp))!=EOF){
		putchar(c);
	}
	fclose(fp);
	return 0;
}
